#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/tiernan_all_cycles.hpp>
#include <boost/graph/labeled_graph.hpp>

struct vprop {
};

struct eprop {
};

typedef 
boost::adjacency_list
< boost::vecS,
  boost::vecS,
  boost::bidirectionalS, 
  boost::property<boost::vertex_index_t, std::size_t>, 
  boost::no_property> 
graph;


int main(int argc, char** argv) {

  // This fails for some reason
  BOOST_CONCEPT_ASSERT(( boost::VertexIndexGraphConcept<graph> ));

  return 0;
}
