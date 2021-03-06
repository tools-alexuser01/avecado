#ifndef AVECADO_LABELIZER_HPP
#define AVECADO_LABELIZER_HPP

#include "post_process/izer_base.hpp"

#include <boost/property_tree/ptree.hpp>

namespace pt = boost::property_tree;

namespace avecado {
namespace post_process {

/**
 * Create a new instance of "labelizer", a post-process that
 * handles shield attribution and concurrencies, and
 * generates label placements along linear geometries.
 */
izer_ptr create_labelizer(pt::ptree const& config);

} // namespace post_process
} // namespace avecado

#endif // AVECADO_LABELIZER_HPP
