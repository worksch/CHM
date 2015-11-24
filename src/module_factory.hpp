#pragma once

#include "module_base.hpp"
#include "logger.hpp"
#include "exception.hpp"
#include <string>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
namespace pt = boost::property_tree;

// Modules to build against
#include "slope_iswr.hpp"
#include "Marsh_shading_iswr.hpp"
#include "const_llra_ta.hpp"
#include "Kunkel_monthlyTd_rh.hpp"
#include "Liston_monthly_llra_ta.hpp"
#include "Sicart_ilwr.hpp"
#include "Liston_wind.hpp"
#include "PenmanMonteith_evaporation.hpp"
#include "Thornton_p.hpp"
#include "Walcek_cloud.hpp"
#include "Harder_precip_phase.hpp"
#include "Burridge_iswr.h"
#include "Iqbal_iswr.h"
#include "iswr_from_obs.h"
#include "Dodson_NSA_ta.h"
#include "Thornton_p.hpp"
#include "Thornton_var_p.h"
#include "rh_from_obs.h"
#include "kunkel_rh.hpp"

class module_factory
{
public:
    module_base* get(std::string ID, pt::ptree config);
};
