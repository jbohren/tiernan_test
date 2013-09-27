#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/tiernan_all_cycles.hpp>
#include <boost/graph/labeled_graph.hpp>
#include <boost/graph/directed_graph.hpp>

typedef 
boost::directed_graph
< boost::no_property,
  boost::no_property> 
graph_directed;

typedef 
boost::adjacency_list
< boost::vecS,
  boost::vecS,
  boost::bidirectionalS, 
  boost::property<boost::vertex_index_t, std::size_t>, 
  boost::no_property> 
graph;

struct vprop {
};

struct eprop {
};

typedef 
boost::adjacency_list
< boost::vecS,
  boost::vecS,
  boost::bidirectionalS, 
  vprop,
  eprop> 
graph_bundled;


int main(int argc, char** argv) {

  // This works
  BOOST_CONCEPT_ASSERT(( boost::VertexIndexGraphConcept<graph_directed> ));
  
  // These fail for some reason
  BOOST_CONCEPT_ASSERT(( boost::VertexIndexGraphConcept<graph> ));
  BOOST_CONCEPT_ASSERT(( boost::VertexIndexGraphConcept<graph_bundled> ));

  return 0;
}
