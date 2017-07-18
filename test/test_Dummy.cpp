#include <boost/test/unit_test.hpp>
#include <rock_library_make_all_dependencies_public/Dummy.hpp>

using namespace rock_library_make_all_dependencies_public;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    rock_library_make_all_dependencies_public::DummyClass dummy;
    dummy.welcome();
}
