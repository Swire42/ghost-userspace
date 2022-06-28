// File: bits/types/struct_itimerspec.cpp
#include <pthread.h>
#include <sstream> // __str__
#include <time.h>

#include <functional>
#include <pybind11/pybind11.h>
#include <string>

#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

void bind_bits_types_struct_itimerspec(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // itimerspec file:bits/types/struct_itimerspec.h line:8
		pybind11::class_<itimerspec, std::shared_ptr<itimerspec>> cl(M(""), "itimerspec", "");
		cl.def( pybind11::init( [](){ return new itimerspec(); } ) );
		cl.def_readwrite("it_interval", &itimerspec::it_interval);
		cl.def_readwrite("it_value", &itimerspec::it_value);
	}
}


// File: std/string_view.cpp
#include <sstream> // __str__
#include <string>
#include <string_view>

#include <functional>
#include <pybind11/pybind11.h>
#include <string>

#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

void bind_std_string_view(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // std::basic_string_view file:string_view line:90
		pybind11::class_<std::basic_string_view<char,std::char_traits<char>>, std::shared_ptr<std::basic_string_view<char,std::char_traits<char>>>> cl(M("std"), "basic_string_view_char_std_char_traits_char_t", "");
		cl.def( pybind11::init( [](){ return new std::basic_string_view<char,std::char_traits<char>>(); } ) );
		cl.def( pybind11::init( [](std::basic_string_view<char,std::char_traits<char>> const &o){ return new std::basic_string_view<char,std::char_traits<char>>(o); } ) );
		cl.def( pybind11::init<const char *>(), pybind11::arg("__str") );

		cl.def( pybind11::init<const char *, unsigned long>(), pybind11::arg("__str"), pybind11::arg("__len") );

		cl.def("assign", (class std::basic_string_view<char, struct std::char_traits<char> > & (std::basic_string_view<char,std::char_traits<char>>::*)(const class std::basic_string_view<char, struct std::char_traits<char> > &)) &std::basic_string_view<char, std::char_traits<char> >::operator=, "C++: std::basic_string_view<char, std::char_traits<char> >::operator=(const class std::basic_string_view<char, struct std::char_traits<char> > &) --> class std::basic_string_view<char, struct std::char_traits<char> > &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		cl.def("begin", (const char * (std::basic_string_view<char,std::char_traits<char>>::*)() const) &std::basic_string_view<char, std::char_traits<char> >::begin, "C++: std::basic_string_view<char, std::char_traits<char> >::begin() const --> const char *", pybind11::return_value_policy::automatic);
		cl.def("end", (const char * (std::basic_string_view<char,std::char_traits<char>>::*)() const) &std::basic_string_view<char, std::char_traits<char> >::end, "C++: std::basic_string_view<char, std::char_traits<char> >::end() const --> const char *", pybind11::return_value_policy::automatic);
		cl.def("cbegin", (const char * (std::basic_string_view<char,std::char_traits<char>>::*)() const) &std::basic_string_view<char, std::char_traits<char> >::cbegin, "C++: std::basic_string_view<char, std::char_traits<char> >::cbegin() const --> const char *", pybind11::return_value_policy::automatic);
		cl.def("cend", (const char * (std::basic_string_view<char,std::char_traits<char>>::*)() const) &std::basic_string_view<char, std::char_traits<char> >::cend, "C++: std::basic_string_view<char, std::char_traits<char> >::cend() const --> const char *", pybind11::return_value_policy::automatic);
		cl.def("size", (unsigned long (std::basic_string_view<char,std::char_traits<char>>::*)() const) &std::basic_string_view<char, std::char_traits<char> >::size, "C++: std::basic_string_view<char, std::char_traits<char> >::size() const --> unsigned long");
		cl.def("length", (unsigned long (std::basic_string_view<char,std::char_traits<char>>::*)() const) &std::basic_string_view<char, std::char_traits<char> >::length, "C++: std::basic_string_view<char, std::char_traits<char> >::length() const --> unsigned long");
		cl.def("max_size", (unsigned long (std::basic_string_view<char,std::char_traits<char>>::*)() const) &std::basic_string_view<char, std::char_traits<char> >::max_size, "C++: std::basic_string_view<char, std::char_traits<char> >::max_size() const --> unsigned long");
		cl.def("empty", (bool (std::basic_string_view<char,std::char_traits<char>>::*)() const) &std::basic_string_view<char, std::char_traits<char> >::empty, "C++: std::basic_string_view<char, std::char_traits<char> >::empty() const --> bool");
		cl.def("__getitem__", (const char & (std::basic_string_view<char,std::char_traits<char>>::*)(unsigned long) const) &std::basic_string_view<char, std::char_traits<char> >::operator[], "C++: std::basic_string_view<char, std::char_traits<char> >::operator[](unsigned long) const --> const char &", pybind11::return_value_policy::automatic, pybind11::arg("__pos"));
		cl.def("at", (const char & (std::basic_string_view<char,std::char_traits<char>>::*)(unsigned long) const) &std::basic_string_view<char, std::char_traits<char> >::at, "C++: std::basic_string_view<char, std::char_traits<char> >::at(unsigned long) const --> const char &", pybind11::return_value_policy::automatic, pybind11::arg("__pos"));
		cl.def("front", (const char & (std::basic_string_view<char,std::char_traits<char>>::*)() const) &std::basic_string_view<char, std::char_traits<char> >::front, "C++: std::basic_string_view<char, std::char_traits<char> >::front() const --> const char &", pybind11::return_value_policy::automatic);
		cl.def("back", (const char & (std::basic_string_view<char,std::char_traits<char>>::*)() const) &std::basic_string_view<char, std::char_traits<char> >::back, "C++: std::basic_string_view<char, std::char_traits<char> >::back() const --> const char &", pybind11::return_value_policy::automatic);
		cl.def("data", (const char * (std::basic_string_view<char,std::char_traits<char>>::*)() const) &std::basic_string_view<char, std::char_traits<char> >::data, "C++: std::basic_string_view<char, std::char_traits<char> >::data() const --> const char *", pybind11::return_value_policy::automatic);
		cl.def("remove_prefix", (void (std::basic_string_view<char,std::char_traits<char>>::*)(unsigned long)) &std::basic_string_view<char, std::char_traits<char> >::remove_prefix, "C++: std::basic_string_view<char, std::char_traits<char> >::remove_prefix(unsigned long) --> void", pybind11::arg("__n"));
		cl.def("remove_suffix", (void (std::basic_string_view<char,std::char_traits<char>>::*)(unsigned long)) &std::basic_string_view<char, std::char_traits<char> >::remove_suffix, "C++: std::basic_string_view<char, std::char_traits<char> >::remove_suffix(unsigned long) --> void", pybind11::arg("__n"));
		cl.def("swap", (void (std::basic_string_view<char,std::char_traits<char>>::*)(class std::basic_string_view<char, struct std::char_traits<char> > &)) &std::basic_string_view<char, std::char_traits<char> >::swap, "C++: std::basic_string_view<char, std::char_traits<char> >::swap(class std::basic_string_view<char, struct std::char_traits<char> > &) --> void", pybind11::arg("__sv"));
		cl.def("copy", [](std::basic_string_view<char,std::char_traits<char>> const &o, char * a0, unsigned long const & a1) -> unsigned long { return o.copy(a0, a1); }, "", pybind11::arg("__str"), pybind11::arg("__n"));
		cl.def("copy", (unsigned long (std::basic_string_view<char,std::char_traits<char>>::*)(char *, unsigned long, unsigned long) const) &std::basic_string_view<char, std::char_traits<char> >::copy, "C++: std::basic_string_view<char, std::char_traits<char> >::copy(char *, unsigned long, unsigned long) const --> unsigned long", pybind11::arg("__str"), pybind11::arg("__n"), pybind11::arg("__pos"));
		cl.def("substr", [](std::basic_string_view<char,std::char_traits<char>> const &o) -> std::basic_string_view<char, struct std::char_traits<char> > { return o.substr(); }, "");
		cl.def("substr", [](std::basic_string_view<char,std::char_traits<char>> const &o, unsigned long const & a0) -> std::basic_string_view<char, struct std::char_traits<char> > { return o.substr(a0); }, "", pybind11::arg("__pos"));
		cl.def("substr", (class std::basic_string_view<char, struct std::char_traits<char> > (std::basic_string_view<char,std::char_traits<char>>::*)(unsigned long, unsigned long) const) &std::basic_string_view<char, std::char_traits<char> >::substr, "C++: std::basic_string_view<char, std::char_traits<char> >::substr(unsigned long, unsigned long) const --> class std::basic_string_view<char, struct std::char_traits<char> >", pybind11::arg("__pos"), pybind11::arg("__n"));
		cl.def("compare", (int (std::basic_string_view<char,std::char_traits<char>>::*)(class std::basic_string_view<char, struct std::char_traits<char> >) const) &std::basic_string_view<char, std::char_traits<char> >::compare, "C++: std::basic_string_view<char, std::char_traits<char> >::compare(class std::basic_string_view<char, struct std::char_traits<char> >) const --> int", pybind11::arg("__str"));
		cl.def("compare", (int (std::basic_string_view<char,std::char_traits<char>>::*)(unsigned long, unsigned long, class std::basic_string_view<char, struct std::char_traits<char> >) const) &std::basic_string_view<char, std::char_traits<char> >::compare, "C++: std::basic_string_view<char, std::char_traits<char> >::compare(unsigned long, unsigned long, class std::basic_string_view<char, struct std::char_traits<char> >) const --> int", pybind11::arg("__pos1"), pybind11::arg("__n1"), pybind11::arg("__str"));
		cl.def("compare", (int (std::basic_string_view<char,std::char_traits<char>>::*)(unsigned long, unsigned long, class std::basic_string_view<char, struct std::char_traits<char> >, unsigned long, unsigned long) const) &std::basic_string_view<char, std::char_traits<char> >::compare, "C++: std::basic_string_view<char, std::char_traits<char> >::compare(unsigned long, unsigned long, class std::basic_string_view<char, struct std::char_traits<char> >, unsigned long, unsigned long) const --> int", pybind11::arg("__pos1"), pybind11::arg("__n1"), pybind11::arg("__str"), pybind11::arg("__pos2"), pybind11::arg("__n2"));
		cl.def("compare", (int (std::basic_string_view<char,std::char_traits<char>>::*)(const char *) const) &std::basic_string_view<char, std::char_traits<char> >::compare, "C++: std::basic_string_view<char, std::char_traits<char> >::compare(const char *) const --> int", pybind11::arg("__str"));
		cl.def("compare", (int (std::basic_string_view<char,std::char_traits<char>>::*)(unsigned long, unsigned long, const char *) const) &std::basic_string_view<char, std::char_traits<char> >::compare, "C++: std::basic_string_view<char, std::char_traits<char> >::compare(unsigned long, unsigned long, const char *) const --> int", pybind11::arg("__pos1"), pybind11::arg("__n1"), pybind11::arg("__str"));
		cl.def("compare", (int (std::basic_string_view<char,std::char_traits<char>>::*)(unsigned long, unsigned long, const char *, unsigned long) const) &std::basic_string_view<char, std::char_traits<char> >::compare, "C++: std::basic_string_view<char, std::char_traits<char> >::compare(unsigned long, unsigned long, const char *, unsigned long) const --> int", pybind11::arg("__pos1"), pybind11::arg("__n1"), pybind11::arg("__str"), pybind11::arg("__n2"));
		cl.def("find", [](std::basic_string_view<char,std::char_traits<char>> const &o, class std::basic_string_view<char, struct std::char_traits<char> > const & a0) -> unsigned long { return o.find(a0); }, "", pybind11::arg("__str"));
		cl.def("find", (unsigned long (std::basic_string_view<char,std::char_traits<char>>::*)(class std::basic_string_view<char, struct std::char_traits<char> >, unsigned long) const) &std::basic_string_view<char, std::char_traits<char> >::find, "C++: std::basic_string_view<char, std::char_traits<char> >::find(class std::basic_string_view<char, struct std::char_traits<char> >, unsigned long) const --> unsigned long", pybind11::arg("__str"), pybind11::arg("__pos"));
		cl.def("find", [](std::basic_string_view<char,std::char_traits<char>> const &o, char const & a0) -> unsigned long { return o.find(a0); }, "", pybind11::arg("__c"));
		cl.def("find", (unsigned long (std::basic_string_view<char,std::char_traits<char>>::*)(char, unsigned long) const) &std::basic_string_view<char, std::char_traits<char> >::find, "C++: std::basic_string_view<char, std::char_traits<char> >::find(char, unsigned long) const --> unsigned long", pybind11::arg("__c"), pybind11::arg("__pos"));
		cl.def("find", (unsigned long (std::basic_string_view<char,std::char_traits<char>>::*)(const char *, unsigned long, unsigned long) const) &std::basic_string_view<char, std::char_traits<char> >::find, "C++: std::basic_string_view<char, std::char_traits<char> >::find(const char *, unsigned long, unsigned long) const --> unsigned long", pybind11::arg("__str"), pybind11::arg("__pos"), pybind11::arg("__n"));
		cl.def("find", [](std::basic_string_view<char,std::char_traits<char>> const &o, const char * a0) -> unsigned long { return o.find(a0); }, "", pybind11::arg("__str"));
		cl.def("find", (unsigned long (std::basic_string_view<char,std::char_traits<char>>::*)(const char *, unsigned long) const) &std::basic_string_view<char, std::char_traits<char> >::find, "C++: std::basic_string_view<char, std::char_traits<char> >::find(const char *, unsigned long) const --> unsigned long", pybind11::arg("__str"), pybind11::arg("__pos"));
		cl.def("rfind", [](std::basic_string_view<char,std::char_traits<char>> const &o, class std::basic_string_view<char, struct std::char_traits<char> > const & a0) -> unsigned long { return o.rfind(a0); }, "", pybind11::arg("__str"));
		cl.def("rfind", (unsigned long (std::basic_string_view<char,std::char_traits<char>>::*)(class std::basic_string_view<char, struct std::char_traits<char> >, unsigned long) const) &std::basic_string_view<char, std::char_traits<char> >::rfind, "C++: std::basic_string_view<char, std::char_traits<char> >::rfind(class std::basic_string_view<char, struct std::char_traits<char> >, unsigned long) const --> unsigned long", pybind11::arg("__str"), pybind11::arg("__pos"));
		cl.def("rfind", [](std::basic_string_view<char,std::char_traits<char>> const &o, char const & a0) -> unsigned long { return o.rfind(a0); }, "", pybind11::arg("__c"));
		cl.def("rfind", (unsigned long (std::basic_string_view<char,std::char_traits<char>>::*)(char, unsigned long) const) &std::basic_string_view<char, std::char_traits<char> >::rfind, "C++: std::basic_string_view<char, std::char_traits<char> >::rfind(char, unsigned long) const --> unsigned long", pybind11::arg("__c"), pybind11::arg("__pos"));
		cl.def("rfind", (unsigned long (std::basic_string_view<char,std::char_traits<char>>::*)(const char *, unsigned long, unsigned long) const) &std::basic_string_view<char, std::char_traits<char> >::rfind, "C++: std::basic_string_view<char, std::char_traits<char> >::rfind(const char *, unsigned long, unsigned long) const --> unsigned long", pybind11::arg("__str"), pybind11::arg("__pos"), pybind11::arg("__n"));
		cl.def("rfind", [](std::basic_string_view<char,std::char_traits<char>> const &o, const char * a0) -> unsigned long { return o.rfind(a0); }, "", pybind11::arg("__str"));
		cl.def("rfind", (unsigned long (std::basic_string_view<char,std::char_traits<char>>::*)(const char *, unsigned long) const) &std::basic_string_view<char, std::char_traits<char> >::rfind, "C++: std::basic_string_view<char, std::char_traits<char> >::rfind(const char *, unsigned long) const --> unsigned long", pybind11::arg("__str"), pybind11::arg("__pos"));
		cl.def("find_first_of", [](std::basic_string_view<char,std::char_traits<char>> const &o, class std::basic_string_view<char, struct std::char_traits<char> > const & a0) -> unsigned long { return o.find_first_of(a0); }, "", pybind11::arg("__str"));
		cl.def("find_first_of", (unsigned long (std::basic_string_view<char,std::char_traits<char>>::*)(class std::basic_string_view<char, struct std::char_traits<char> >, unsigned long) const) &std::basic_string_view<char, std::char_traits<char> >::find_first_of, "C++: std::basic_string_view<char, std::char_traits<char> >::find_first_of(class std::basic_string_view<char, struct std::char_traits<char> >, unsigned long) const --> unsigned long", pybind11::arg("__str"), pybind11::arg("__pos"));
		cl.def("find_first_of", [](std::basic_string_view<char,std::char_traits<char>> const &o, char const & a0) -> unsigned long { return o.find_first_of(a0); }, "", pybind11::arg("__c"));
		cl.def("find_first_of", (unsigned long (std::basic_string_view<char,std::char_traits<char>>::*)(char, unsigned long) const) &std::basic_string_view<char, std::char_traits<char> >::find_first_of, "C++: std::basic_string_view<char, std::char_traits<char> >::find_first_of(char, unsigned long) const --> unsigned long", pybind11::arg("__c"), pybind11::arg("__pos"));
		cl.def("find_first_of", (unsigned long (std::basic_string_view<char,std::char_traits<char>>::*)(const char *, unsigned long, unsigned long) const) &std::basic_string_view<char, std::char_traits<char> >::find_first_of, "C++: std::basic_string_view<char, std::char_traits<char> >::find_first_of(const char *, unsigned long, unsigned long) const --> unsigned long", pybind11::arg("__str"), pybind11::arg("__pos"), pybind11::arg("__n"));
		cl.def("find_first_of", [](std::basic_string_view<char,std::char_traits<char>> const &o, const char * a0) -> unsigned long { return o.find_first_of(a0); }, "", pybind11::arg("__str"));
		cl.def("find_first_of", (unsigned long (std::basic_string_view<char,std::char_traits<char>>::*)(const char *, unsigned long) const) &std::basic_string_view<char, std::char_traits<char> >::find_first_of, "C++: std::basic_string_view<char, std::char_traits<char> >::find_first_of(const char *, unsigned long) const --> unsigned long", pybind11::arg("__str"), pybind11::arg("__pos"));
		cl.def("find_last_of", [](std::basic_string_view<char,std::char_traits<char>> const &o, class std::basic_string_view<char, struct std::char_traits<char> > const & a0) -> unsigned long { return o.find_last_of(a0); }, "", pybind11::arg("__str"));
		cl.def("find_last_of", (unsigned long (std::basic_string_view<char,std::char_traits<char>>::*)(class std::basic_string_view<char, struct std::char_traits<char> >, unsigned long) const) &std::basic_string_view<char, std::char_traits<char> >::find_last_of, "C++: std::basic_string_view<char, std::char_traits<char> >::find_last_of(class std::basic_string_view<char, struct std::char_traits<char> >, unsigned long) const --> unsigned long", pybind11::arg("__str"), pybind11::arg("__pos"));
		cl.def("find_last_of", [](std::basic_string_view<char,std::char_traits<char>> const &o, char const & a0) -> unsigned long { return o.find_last_of(a0); }, "", pybind11::arg("__c"));
		cl.def("find_last_of", (unsigned long (std::basic_string_view<char,std::char_traits<char>>::*)(char, unsigned long) const) &std::basic_string_view<char, std::char_traits<char> >::find_last_of, "C++: std::basic_string_view<char, std::char_traits<char> >::find_last_of(char, unsigned long) const --> unsigned long", pybind11::arg("__c"), pybind11::arg("__pos"));
		cl.def("find_last_of", (unsigned long (std::basic_string_view<char,std::char_traits<char>>::*)(const char *, unsigned long, unsigned long) const) &std::basic_string_view<char, std::char_traits<char> >::find_last_of, "C++: std::basic_string_view<char, std::char_traits<char> >::find_last_of(const char *, unsigned long, unsigned long) const --> unsigned long", pybind11::arg("__str"), pybind11::arg("__pos"), pybind11::arg("__n"));
		cl.def("find_last_of", [](std::basic_string_view<char,std::char_traits<char>> const &o, const char * a0) -> unsigned long { return o.find_last_of(a0); }, "", pybind11::arg("__str"));
		cl.def("find_last_of", (unsigned long (std::basic_string_view<char,std::char_traits<char>>::*)(const char *, unsigned long) const) &std::basic_string_view<char, std::char_traits<char> >::find_last_of, "C++: std::basic_string_view<char, std::char_traits<char> >::find_last_of(const char *, unsigned long) const --> unsigned long", pybind11::arg("__str"), pybind11::arg("__pos"));
		cl.def("find_first_not_of", [](std::basic_string_view<char,std::char_traits<char>> const &o, class std::basic_string_view<char, struct std::char_traits<char> > const & a0) -> unsigned long { return o.find_first_not_of(a0); }, "", pybind11::arg("__str"));
		cl.def("find_first_not_of", (unsigned long (std::basic_string_view<char,std::char_traits<char>>::*)(class std::basic_string_view<char, struct std::char_traits<char> >, unsigned long) const) &std::basic_string_view<char, std::char_traits<char> >::find_first_not_of, "C++: std::basic_string_view<char, std::char_traits<char> >::find_first_not_of(class std::basic_string_view<char, struct std::char_traits<char> >, unsigned long) const --> unsigned long", pybind11::arg("__str"), pybind11::arg("__pos"));
		cl.def("find_first_not_of", [](std::basic_string_view<char,std::char_traits<char>> const &o, char const & a0) -> unsigned long { return o.find_first_not_of(a0); }, "", pybind11::arg("__c"));
		cl.def("find_first_not_of", (unsigned long (std::basic_string_view<char,std::char_traits<char>>::*)(char, unsigned long) const) &std::basic_string_view<char, std::char_traits<char> >::find_first_not_of, "C++: std::basic_string_view<char, std::char_traits<char> >::find_first_not_of(char, unsigned long) const --> unsigned long", pybind11::arg("__c"), pybind11::arg("__pos"));
		cl.def("find_first_not_of", (unsigned long (std::basic_string_view<char,std::char_traits<char>>::*)(const char *, unsigned long, unsigned long) const) &std::basic_string_view<char, std::char_traits<char> >::find_first_not_of, "C++: std::basic_string_view<char, std::char_traits<char> >::find_first_not_of(const char *, unsigned long, unsigned long) const --> unsigned long", pybind11::arg("__str"), pybind11::arg("__pos"), pybind11::arg("__n"));
		cl.def("find_first_not_of", [](std::basic_string_view<char,std::char_traits<char>> const &o, const char * a0) -> unsigned long { return o.find_first_not_of(a0); }, "", pybind11::arg("__str"));
		cl.def("find_first_not_of", (unsigned long (std::basic_string_view<char,std::char_traits<char>>::*)(const char *, unsigned long) const) &std::basic_string_view<char, std::char_traits<char> >::find_first_not_of, "C++: std::basic_string_view<char, std::char_traits<char> >::find_first_not_of(const char *, unsigned long) const --> unsigned long", pybind11::arg("__str"), pybind11::arg("__pos"));
		cl.def("find_last_not_of", [](std::basic_string_view<char,std::char_traits<char>> const &o, class std::basic_string_view<char, struct std::char_traits<char> > const & a0) -> unsigned long { return o.find_last_not_of(a0); }, "", pybind11::arg("__str"));
		cl.def("find_last_not_of", (unsigned long (std::basic_string_view<char,std::char_traits<char>>::*)(class std::basic_string_view<char, struct std::char_traits<char> >, unsigned long) const) &std::basic_string_view<char, std::char_traits<char> >::find_last_not_of, "C++: std::basic_string_view<char, std::char_traits<char> >::find_last_not_of(class std::basic_string_view<char, struct std::char_traits<char> >, unsigned long) const --> unsigned long", pybind11::arg("__str"), pybind11::arg("__pos"));
		cl.def("find_last_not_of", [](std::basic_string_view<char,std::char_traits<char>> const &o, char const & a0) -> unsigned long { return o.find_last_not_of(a0); }, "", pybind11::arg("__c"));
		cl.def("find_last_not_of", (unsigned long (std::basic_string_view<char,std::char_traits<char>>::*)(char, unsigned long) const) &std::basic_string_view<char, std::char_traits<char> >::find_last_not_of, "C++: std::basic_string_view<char, std::char_traits<char> >::find_last_not_of(char, unsigned long) const --> unsigned long", pybind11::arg("__c"), pybind11::arg("__pos"));
		cl.def("find_last_not_of", (unsigned long (std::basic_string_view<char,std::char_traits<char>>::*)(const char *, unsigned long, unsigned long) const) &std::basic_string_view<char, std::char_traits<char> >::find_last_not_of, "C++: std::basic_string_view<char, std::char_traits<char> >::find_last_not_of(const char *, unsigned long, unsigned long) const --> unsigned long", pybind11::arg("__str"), pybind11::arg("__pos"), pybind11::arg("__n"));
		cl.def("find_last_not_of", [](std::basic_string_view<char,std::char_traits<char>> const &o, const char * a0) -> unsigned long { return o.find_last_not_of(a0); }, "", pybind11::arg("__str"));
		cl.def("find_last_not_of", (unsigned long (std::basic_string_view<char,std::char_traits<char>>::*)(const char *, unsigned long) const) &std::basic_string_view<char, std::char_traits<char> >::find_last_not_of, "C++: std::basic_string_view<char, std::char_traits<char> >::find_last_not_of(const char *, unsigned long) const --> unsigned long", pybind11::arg("__str"), pybind11::arg("__pos"));
	}
}


// File: bits/types/struct_FILE.cpp
#include <bits/types/__fpos64_t.h>
#include <bits/types/__fpos_t.h>
#include <bits/types/cookie_io_functions_t.h>
#include <cstdio>
#include <errno.h>
#include <ext/string_conversions.h>
#include <sstream> // __str__
#include <stdio.h>

#include <functional>
#include <pybind11/pybind11.h>
#include <string>

#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

void bind_bits_types_struct_FILE(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // _IO_FILE file:bits/types/struct_FILE.h line:49
		pybind11::class_<_IO_FILE, std::shared_ptr<_IO_FILE>> cl(M(""), "_IO_FILE", "");
		cl.def( pybind11::init( [](){ return new _IO_FILE(); } ) );
		cl.def_readwrite("_flags", &_IO_FILE::_flags);
		cl.def_readwrite("_fileno", &_IO_FILE::_fileno);
		cl.def_readwrite("_flags2", &_IO_FILE::_flags2);
		cl.def_readwrite("_old_offset", &_IO_FILE::_old_offset);
		cl.def_readwrite("_cur_column", &_IO_FILE::_cur_column);
		cl.def_readwrite("_vtable_offset", &_IO_FILE::_vtable_offset);
		cl.def_readwrite("_offset", &_IO_FILE::_offset);
		cl.def_readwrite("__pad5", &_IO_FILE::__pad5);
		cl.def_readwrite("_mode", &_IO_FILE::_mode);
	}
}


// File: std/stl_vector.cpp
#include <iterator>
#include <memory>
#include <sstream> // __str__
#include <vector>

#include <functional>
#include <pybind11/pybind11.h>
#include <string>

#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

void bind_std_stl_vector(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // std::vector file:bits/stl_vector.h line:386
		pybind11::class_<std::vector<int>, std::shared_ptr<std::vector<int>>> cl(M("std"), "vector_int_t", "");
		cl.def( pybind11::init( [](){ return new std::vector<int>(); } ) );
		cl.def( pybind11::init<const class std::allocator<int> &>(), pybind11::arg("__a") );

		cl.def( pybind11::init( [](unsigned long const & a0){ return new std::vector<int>(a0); } ), "doc" , pybind11::arg("__n"));
		cl.def( pybind11::init<unsigned long, const class std::allocator<int> &>(), pybind11::arg("__n"), pybind11::arg("__a") );

		cl.def( pybind11::init( [](unsigned long const & a0, const int & a1){ return new std::vector<int>(a0, a1); } ), "doc" , pybind11::arg("__n"), pybind11::arg("__value"));
		cl.def( pybind11::init<unsigned long, const int &, const class std::allocator<int> &>(), pybind11::arg("__n"), pybind11::arg("__value"), pybind11::arg("__a") );

		cl.def( pybind11::init( [](std::vector<int> const &o){ return new std::vector<int>(o); } ) );
		cl.def( pybind11::init<const class std::vector<int, class std::allocator<int> > &, const class std::allocator<int> &>(), pybind11::arg("__x"), pybind11::arg("__a") );

		cl.def("assign", (class std::vector<int, class std::allocator<int> > & (std::vector<int>::*)(const class std::vector<int, class std::allocator<int> > &)) &std::vector<int>::operator=, "C++: std::vector<int>::operator=(const class std::vector<int, class std::allocator<int> > &) --> class std::vector<int, class std::allocator<int> > &", pybind11::return_value_policy::automatic, pybind11::arg("__x"));
		cl.def("assign", (void (std::vector<int>::*)(unsigned long, const int &)) &std::vector<int>::assign, "C++: std::vector<int>::assign(unsigned long, const int &) --> void", pybind11::arg("__n"), pybind11::arg("__val"));
		cl.def("begin", (class __gnu_cxx::__normal_iterator<int *, class std::vector<int, class std::allocator<int> > > (std::vector<int>::*)()) &std::vector<int>::begin, "C++: std::vector<int>::begin() --> class __gnu_cxx::__normal_iterator<int *, class std::vector<int, class std::allocator<int> > >");
		cl.def("end", (class __gnu_cxx::__normal_iterator<int *, class std::vector<int, class std::allocator<int> > > (std::vector<int>::*)()) &std::vector<int>::end, "C++: std::vector<int>::end() --> class __gnu_cxx::__normal_iterator<int *, class std::vector<int, class std::allocator<int> > >");
		cl.def("cbegin", (class __gnu_cxx::__normal_iterator<const int *, class std::vector<int, class std::allocator<int> > > (std::vector<int>::*)() const) &std::vector<int>::cbegin, "C++: std::vector<int>::cbegin() const --> class __gnu_cxx::__normal_iterator<const int *, class std::vector<int, class std::allocator<int> > >");
		cl.def("cend", (class __gnu_cxx::__normal_iterator<const int *, class std::vector<int, class std::allocator<int> > > (std::vector<int>::*)() const) &std::vector<int>::cend, "C++: std::vector<int>::cend() const --> class __gnu_cxx::__normal_iterator<const int *, class std::vector<int, class std::allocator<int> > >");
		cl.def("size", (unsigned long (std::vector<int>::*)() const) &std::vector<int>::size, "C++: std::vector<int>::size() const --> unsigned long");
		cl.def("max_size", (unsigned long (std::vector<int>::*)() const) &std::vector<int>::max_size, "C++: std::vector<int>::max_size() const --> unsigned long");
		cl.def("resize", (void (std::vector<int>::*)(unsigned long)) &std::vector<int>::resize, "C++: std::vector<int>::resize(unsigned long) --> void", pybind11::arg("__new_size"));
		cl.def("resize", (void (std::vector<int>::*)(unsigned long, const int &)) &std::vector<int>::resize, "C++: std::vector<int>::resize(unsigned long, const int &) --> void", pybind11::arg("__new_size"), pybind11::arg("__x"));
		cl.def("shrink_to_fit", (void (std::vector<int>::*)()) &std::vector<int>::shrink_to_fit, "C++: std::vector<int>::shrink_to_fit() --> void");
		cl.def("capacity", (unsigned long (std::vector<int>::*)() const) &std::vector<int>::capacity, "C++: std::vector<int>::capacity() const --> unsigned long");
		cl.def("empty", (bool (std::vector<int>::*)() const) &std::vector<int>::empty, "C++: std::vector<int>::empty() const --> bool");
		cl.def("reserve", (void (std::vector<int>::*)(unsigned long)) &std::vector<int>::reserve, "C++: std::vector<int>::reserve(unsigned long) --> void", pybind11::arg("__n"));
		cl.def("__getitem__", (int & (std::vector<int>::*)(unsigned long)) &std::vector<int>::operator[], "C++: std::vector<int>::operator[](unsigned long) --> int &", pybind11::return_value_policy::automatic, pybind11::arg("__n"));
		cl.def("at", (int & (std::vector<int>::*)(unsigned long)) &std::vector<int>::at, "C++: std::vector<int>::at(unsigned long) --> int &", pybind11::return_value_policy::automatic, pybind11::arg("__n"));
		cl.def("front", (int & (std::vector<int>::*)()) &std::vector<int>::front, "C++: std::vector<int>::front() --> int &", pybind11::return_value_policy::automatic);
		cl.def("back", (int & (std::vector<int>::*)()) &std::vector<int>::back, "C++: std::vector<int>::back() --> int &", pybind11::return_value_policy::automatic);
		cl.def("data", (int * (std::vector<int>::*)()) &std::vector<int>::data, "C++: std::vector<int>::data() --> int *", pybind11::return_value_policy::automatic);
		cl.def("push_back", (void (std::vector<int>::*)(const int &)) &std::vector<int>::push_back, "C++: std::vector<int>::push_back(const int &) --> void", pybind11::arg("__x"));
		cl.def("pop_back", (void (std::vector<int>::*)()) &std::vector<int>::pop_back, "C++: std::vector<int>::pop_back() --> void");
		cl.def("insert", (class __gnu_cxx::__normal_iterator<int *, class std::vector<int, class std::allocator<int> > > (std::vector<int>::*)(class __gnu_cxx::__normal_iterator<const int *, class std::vector<int, class std::allocator<int> > >, const int &)) &std::vector<int>::insert, "C++: std::vector<int>::insert(class __gnu_cxx::__normal_iterator<const int *, class std::vector<int, class std::allocator<int> > >, const int &) --> class __gnu_cxx::__normal_iterator<int *, class std::vector<int, class std::allocator<int> > >", pybind11::arg("__position"), pybind11::arg("__x"));
		cl.def("insert", (class __gnu_cxx::__normal_iterator<int *, class std::vector<int, class std::allocator<int> > > (std::vector<int>::*)(class __gnu_cxx::__normal_iterator<const int *, class std::vector<int, class std::allocator<int> > >, unsigned long, const int &)) &std::vector<int>::insert, "C++: std::vector<int>::insert(class __gnu_cxx::__normal_iterator<const int *, class std::vector<int, class std::allocator<int> > >, unsigned long, const int &) --> class __gnu_cxx::__normal_iterator<int *, class std::vector<int, class std::allocator<int> > >", pybind11::arg("__position"), pybind11::arg("__n"), pybind11::arg("__x"));
		cl.def("erase", (class __gnu_cxx::__normal_iterator<int *, class std::vector<int, class std::allocator<int> > > (std::vector<int>::*)(class __gnu_cxx::__normal_iterator<const int *, class std::vector<int, class std::allocator<int> > >)) &std::vector<int>::erase, "C++: std::vector<int>::erase(class __gnu_cxx::__normal_iterator<const int *, class std::vector<int, class std::allocator<int> > >) --> class __gnu_cxx::__normal_iterator<int *, class std::vector<int, class std::allocator<int> > >", pybind11::arg("__position"));
		cl.def("erase", (class __gnu_cxx::__normal_iterator<int *, class std::vector<int, class std::allocator<int> > > (std::vector<int>::*)(class __gnu_cxx::__normal_iterator<const int *, class std::vector<int, class std::allocator<int> > >, class __gnu_cxx::__normal_iterator<const int *, class std::vector<int, class std::allocator<int> > >)) &std::vector<int>::erase, "C++: std::vector<int>::erase(class __gnu_cxx::__normal_iterator<const int *, class std::vector<int, class std::allocator<int> > >, class __gnu_cxx::__normal_iterator<const int *, class std::vector<int, class std::allocator<int> > >) --> class __gnu_cxx::__normal_iterator<int *, class std::vector<int, class std::allocator<int> > >", pybind11::arg("__first"), pybind11::arg("__last"));
		cl.def("swap", (void (std::vector<int>::*)(class std::vector<int, class std::allocator<int> > &)) &std::vector<int>::swap, "C++: std::vector<int>::swap(class std::vector<int, class std::allocator<int> > &) --> void", pybind11::arg("__x"));
		cl.def("clear", (void (std::vector<int>::*)()) &std::vector<int>::clear, "C++: std::vector<int>::clear() --> void");
	}
	{ // std::vector file:bits/stl_vector.h line:386
		pybind11::class_<std::vector<ghost::Cpu>, std::shared_ptr<std::vector<ghost::Cpu>>> cl(M("std"), "vector_ghost_Cpu_t", "");
		cl.def( pybind11::init( [](){ return new std::vector<ghost::Cpu>(); } ) );
		cl.def( pybind11::init<const class std::allocator<class ghost::Cpu> &>(), pybind11::arg("__a") );

		cl.def( pybind11::init( [](unsigned long const & a0){ return new std::vector<ghost::Cpu>(a0); } ), "doc" , pybind11::arg("__n"));
		cl.def( pybind11::init<unsigned long, const class std::allocator<class ghost::Cpu> &>(), pybind11::arg("__n"), pybind11::arg("__a") );

		cl.def( pybind11::init( [](unsigned long const & a0, const class ghost::Cpu & a1){ return new std::vector<ghost::Cpu>(a0, a1); } ), "doc" , pybind11::arg("__n"), pybind11::arg("__value"));
		cl.def( pybind11::init<unsigned long, const class ghost::Cpu &, const class std::allocator<class ghost::Cpu> &>(), pybind11::arg("__n"), pybind11::arg("__value"), pybind11::arg("__a") );

		cl.def( pybind11::init( [](std::vector<ghost::Cpu> const &o){ return new std::vector<ghost::Cpu>(o); } ) );
		cl.def( pybind11::init<const class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> > &, const class std::allocator<class ghost::Cpu> &>(), pybind11::arg("__x"), pybind11::arg("__a") );

		cl.def("assign", (class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> > & (std::vector<ghost::Cpu>::*)(const class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> > &)) &std::vector<ghost::Cpu>::operator=, "C++: std::vector<ghost::Cpu>::operator=(const class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> > &) --> class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> > &", pybind11::return_value_policy::automatic, pybind11::arg("__x"));
		cl.def("assign", (void (std::vector<ghost::Cpu>::*)(unsigned long, const class ghost::Cpu &)) &std::vector<ghost::Cpu>::assign, "C++: std::vector<ghost::Cpu>::assign(unsigned long, const class ghost::Cpu &) --> void", pybind11::arg("__n"), pybind11::arg("__val"));
		cl.def("begin", (class __gnu_cxx::__normal_iterator<class ghost::Cpu *, class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> > > (std::vector<ghost::Cpu>::*)()) &std::vector<ghost::Cpu>::begin, "C++: std::vector<ghost::Cpu>::begin() --> class __gnu_cxx::__normal_iterator<class ghost::Cpu *, class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> > >");
		cl.def("end", (class __gnu_cxx::__normal_iterator<class ghost::Cpu *, class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> > > (std::vector<ghost::Cpu>::*)()) &std::vector<ghost::Cpu>::end, "C++: std::vector<ghost::Cpu>::end() --> class __gnu_cxx::__normal_iterator<class ghost::Cpu *, class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> > >");
		cl.def("cbegin", (class __gnu_cxx::__normal_iterator<const class ghost::Cpu *, class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> > > (std::vector<ghost::Cpu>::*)() const) &std::vector<ghost::Cpu>::cbegin, "C++: std::vector<ghost::Cpu>::cbegin() const --> class __gnu_cxx::__normal_iterator<const class ghost::Cpu *, class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> > >");
		cl.def("cend", (class __gnu_cxx::__normal_iterator<const class ghost::Cpu *, class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> > > (std::vector<ghost::Cpu>::*)() const) &std::vector<ghost::Cpu>::cend, "C++: std::vector<ghost::Cpu>::cend() const --> class __gnu_cxx::__normal_iterator<const class ghost::Cpu *, class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> > >");
		cl.def("size", (unsigned long (std::vector<ghost::Cpu>::*)() const) &std::vector<ghost::Cpu>::size, "C++: std::vector<ghost::Cpu>::size() const --> unsigned long");
		cl.def("max_size", (unsigned long (std::vector<ghost::Cpu>::*)() const) &std::vector<ghost::Cpu>::max_size, "C++: std::vector<ghost::Cpu>::max_size() const --> unsigned long");
		cl.def("resize", (void (std::vector<ghost::Cpu>::*)(unsigned long)) &std::vector<ghost::Cpu>::resize, "C++: std::vector<ghost::Cpu>::resize(unsigned long) --> void", pybind11::arg("__new_size"));
		cl.def("resize", (void (std::vector<ghost::Cpu>::*)(unsigned long, const class ghost::Cpu &)) &std::vector<ghost::Cpu>::resize, "C++: std::vector<ghost::Cpu>::resize(unsigned long, const class ghost::Cpu &) --> void", pybind11::arg("__new_size"), pybind11::arg("__x"));
		cl.def("shrink_to_fit", (void (std::vector<ghost::Cpu>::*)()) &std::vector<ghost::Cpu>::shrink_to_fit, "C++: std::vector<ghost::Cpu>::shrink_to_fit() --> void");
		cl.def("capacity", (unsigned long (std::vector<ghost::Cpu>::*)() const) &std::vector<ghost::Cpu>::capacity, "C++: std::vector<ghost::Cpu>::capacity() const --> unsigned long");
		cl.def("empty", (bool (std::vector<ghost::Cpu>::*)() const) &std::vector<ghost::Cpu>::empty, "C++: std::vector<ghost::Cpu>::empty() const --> bool");
		cl.def("reserve", (void (std::vector<ghost::Cpu>::*)(unsigned long)) &std::vector<ghost::Cpu>::reserve, "C++: std::vector<ghost::Cpu>::reserve(unsigned long) --> void", pybind11::arg("__n"));
		cl.def("__getitem__", (class ghost::Cpu & (std::vector<ghost::Cpu>::*)(unsigned long)) &std::vector<ghost::Cpu>::operator[], "C++: std::vector<ghost::Cpu>::operator[](unsigned long) --> class ghost::Cpu &", pybind11::return_value_policy::automatic, pybind11::arg("__n"));
		cl.def("at", (class ghost::Cpu & (std::vector<ghost::Cpu>::*)(unsigned long)) &std::vector<ghost::Cpu>::at, "C++: std::vector<ghost::Cpu>::at(unsigned long) --> class ghost::Cpu &", pybind11::return_value_policy::automatic, pybind11::arg("__n"));
		cl.def("front", (class ghost::Cpu & (std::vector<ghost::Cpu>::*)()) &std::vector<ghost::Cpu>::front, "C++: std::vector<ghost::Cpu>::front() --> class ghost::Cpu &", pybind11::return_value_policy::automatic);
		cl.def("back", (class ghost::Cpu & (std::vector<ghost::Cpu>::*)()) &std::vector<ghost::Cpu>::back, "C++: std::vector<ghost::Cpu>::back() --> class ghost::Cpu &", pybind11::return_value_policy::automatic);
		cl.def("data", (class ghost::Cpu * (std::vector<ghost::Cpu>::*)()) &std::vector<ghost::Cpu>::data, "C++: std::vector<ghost::Cpu>::data() --> class ghost::Cpu *", pybind11::return_value_policy::automatic);
		cl.def("push_back", (void (std::vector<ghost::Cpu>::*)(const class ghost::Cpu &)) &std::vector<ghost::Cpu>::push_back, "C++: std::vector<ghost::Cpu>::push_back(const class ghost::Cpu &) --> void", pybind11::arg("__x"));
		cl.def("pop_back", (void (std::vector<ghost::Cpu>::*)()) &std::vector<ghost::Cpu>::pop_back, "C++: std::vector<ghost::Cpu>::pop_back() --> void");
		cl.def("insert", (class __gnu_cxx::__normal_iterator<class ghost::Cpu *, class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> > > (std::vector<ghost::Cpu>::*)(class __gnu_cxx::__normal_iterator<const class ghost::Cpu *, class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> > >, const class ghost::Cpu &)) &std::vector<ghost::Cpu>::insert, "C++: std::vector<ghost::Cpu>::insert(class __gnu_cxx::__normal_iterator<const class ghost::Cpu *, class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> > >, const class ghost::Cpu &) --> class __gnu_cxx::__normal_iterator<class ghost::Cpu *, class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> > >", pybind11::arg("__position"), pybind11::arg("__x"));
		cl.def("insert", (class __gnu_cxx::__normal_iterator<class ghost::Cpu *, class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> > > (std::vector<ghost::Cpu>::*)(class __gnu_cxx::__normal_iterator<const class ghost::Cpu *, class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> > >, unsigned long, const class ghost::Cpu &)) &std::vector<ghost::Cpu>::insert, "C++: std::vector<ghost::Cpu>::insert(class __gnu_cxx::__normal_iterator<const class ghost::Cpu *, class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> > >, unsigned long, const class ghost::Cpu &) --> class __gnu_cxx::__normal_iterator<class ghost::Cpu *, class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> > >", pybind11::arg("__position"), pybind11::arg("__n"), pybind11::arg("__x"));
		cl.def("erase", (class __gnu_cxx::__normal_iterator<class ghost::Cpu *, class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> > > (std::vector<ghost::Cpu>::*)(class __gnu_cxx::__normal_iterator<const class ghost::Cpu *, class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> > >)) &std::vector<ghost::Cpu>::erase, "C++: std::vector<ghost::Cpu>::erase(class __gnu_cxx::__normal_iterator<const class ghost::Cpu *, class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> > >) --> class __gnu_cxx::__normal_iterator<class ghost::Cpu *, class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> > >", pybind11::arg("__position"));
		cl.def("erase", (class __gnu_cxx::__normal_iterator<class ghost::Cpu *, class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> > > (std::vector<ghost::Cpu>::*)(class __gnu_cxx::__normal_iterator<const class ghost::Cpu *, class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> > >, class __gnu_cxx::__normal_iterator<const class ghost::Cpu *, class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> > >)) &std::vector<ghost::Cpu>::erase, "C++: std::vector<ghost::Cpu>::erase(class __gnu_cxx::__normal_iterator<const class ghost::Cpu *, class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> > >, class __gnu_cxx::__normal_iterator<const class ghost::Cpu *, class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> > >) --> class __gnu_cxx::__normal_iterator<class ghost::Cpu *, class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> > >", pybind11::arg("__first"), pybind11::arg("__last"));
		cl.def("swap", (void (std::vector<ghost::Cpu>::*)(class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> > &)) &std::vector<ghost::Cpu>::swap, "C++: std::vector<ghost::Cpu>::swap(class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> > &) --> void", pybind11::arg("__x"));
		cl.def("clear", (void (std::vector<ghost::Cpu>::*)()) &std::vector<ghost::Cpu>::clear, "C++: std::vector<ghost::Cpu>::clear() --> void");
	}
}


// File: std/stl_vector_1.cpp
#include <iterator>
#include <lib/agent.h>
#include <memory>
#include <memory_resource>
#include <sstream> // __str__
#include <vector>

#include <functional>
#include <pybind11/pybind11.h>
#include <string>

#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

void bind_std_stl_vector_1(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // std::vector file:bits/stl_vector.h line:386
		pybind11::class_<std::vector<unsigned int>, std::shared_ptr<std::vector<unsigned int>>> cl(M("std"), "vector_unsigned_int_t", "");
		cl.def( pybind11::init( [](){ return new std::vector<unsigned int>(); } ) );
		cl.def( pybind11::init<const class std::allocator<unsigned int> &>(), pybind11::arg("__a") );

		cl.def( pybind11::init( [](unsigned long const & a0){ return new std::vector<unsigned int>(a0); } ), "doc" , pybind11::arg("__n"));
		cl.def( pybind11::init<unsigned long, const class std::allocator<unsigned int> &>(), pybind11::arg("__n"), pybind11::arg("__a") );

		cl.def( pybind11::init( [](unsigned long const & a0, const unsigned int & a1){ return new std::vector<unsigned int>(a0, a1); } ), "doc" , pybind11::arg("__n"), pybind11::arg("__value"));
		cl.def( pybind11::init<unsigned long, const unsigned int &, const class std::allocator<unsigned int> &>(), pybind11::arg("__n"), pybind11::arg("__value"), pybind11::arg("__a") );

		cl.def( pybind11::init( [](std::vector<unsigned int> const &o){ return new std::vector<unsigned int>(o); } ) );
		cl.def( pybind11::init<const class std::vector<unsigned int, class std::allocator<unsigned int> > &, const class std::allocator<unsigned int> &>(), pybind11::arg("__x"), pybind11::arg("__a") );

		cl.def("assign", (class std::vector<unsigned int, class std::allocator<unsigned int> > & (std::vector<unsigned int>::*)(const class std::vector<unsigned int, class std::allocator<unsigned int> > &)) &std::vector<unsigned int>::operator=, "C++: std::vector<unsigned int>::operator=(const class std::vector<unsigned int, class std::allocator<unsigned int> > &) --> class std::vector<unsigned int, class std::allocator<unsigned int> > &", pybind11::return_value_policy::automatic, pybind11::arg("__x"));
		cl.def("assign", (void (std::vector<unsigned int>::*)(unsigned long, const unsigned int &)) &std::vector<unsigned int>::assign, "C++: std::vector<unsigned int>::assign(unsigned long, const unsigned int &) --> void", pybind11::arg("__n"), pybind11::arg("__val"));
		cl.def("begin", (class __gnu_cxx::__normal_iterator<unsigned int *, class std::vector<unsigned int, class std::allocator<unsigned int> > > (std::vector<unsigned int>::*)()) &std::vector<unsigned int>::begin, "C++: std::vector<unsigned int>::begin() --> class __gnu_cxx::__normal_iterator<unsigned int *, class std::vector<unsigned int, class std::allocator<unsigned int> > >");
		cl.def("end", (class __gnu_cxx::__normal_iterator<unsigned int *, class std::vector<unsigned int, class std::allocator<unsigned int> > > (std::vector<unsigned int>::*)()) &std::vector<unsigned int>::end, "C++: std::vector<unsigned int>::end() --> class __gnu_cxx::__normal_iterator<unsigned int *, class std::vector<unsigned int, class std::allocator<unsigned int> > >");
		cl.def("cbegin", (class __gnu_cxx::__normal_iterator<const unsigned int *, class std::vector<unsigned int, class std::allocator<unsigned int> > > (std::vector<unsigned int>::*)() const) &std::vector<unsigned int>::cbegin, "C++: std::vector<unsigned int>::cbegin() const --> class __gnu_cxx::__normal_iterator<const unsigned int *, class std::vector<unsigned int, class std::allocator<unsigned int> > >");
		cl.def("cend", (class __gnu_cxx::__normal_iterator<const unsigned int *, class std::vector<unsigned int, class std::allocator<unsigned int> > > (std::vector<unsigned int>::*)() const) &std::vector<unsigned int>::cend, "C++: std::vector<unsigned int>::cend() const --> class __gnu_cxx::__normal_iterator<const unsigned int *, class std::vector<unsigned int, class std::allocator<unsigned int> > >");
		cl.def("size", (unsigned long (std::vector<unsigned int>::*)() const) &std::vector<unsigned int>::size, "C++: std::vector<unsigned int>::size() const --> unsigned long");
		cl.def("max_size", (unsigned long (std::vector<unsigned int>::*)() const) &std::vector<unsigned int>::max_size, "C++: std::vector<unsigned int>::max_size() const --> unsigned long");
		cl.def("resize", (void (std::vector<unsigned int>::*)(unsigned long)) &std::vector<unsigned int>::resize, "C++: std::vector<unsigned int>::resize(unsigned long) --> void", pybind11::arg("__new_size"));
		cl.def("resize", (void (std::vector<unsigned int>::*)(unsigned long, const unsigned int &)) &std::vector<unsigned int>::resize, "C++: std::vector<unsigned int>::resize(unsigned long, const unsigned int &) --> void", pybind11::arg("__new_size"), pybind11::arg("__x"));
		cl.def("shrink_to_fit", (void (std::vector<unsigned int>::*)()) &std::vector<unsigned int>::shrink_to_fit, "C++: std::vector<unsigned int>::shrink_to_fit() --> void");
		cl.def("capacity", (unsigned long (std::vector<unsigned int>::*)() const) &std::vector<unsigned int>::capacity, "C++: std::vector<unsigned int>::capacity() const --> unsigned long");
		cl.def("empty", (bool (std::vector<unsigned int>::*)() const) &std::vector<unsigned int>::empty, "C++: std::vector<unsigned int>::empty() const --> bool");
		cl.def("reserve", (void (std::vector<unsigned int>::*)(unsigned long)) &std::vector<unsigned int>::reserve, "C++: std::vector<unsigned int>::reserve(unsigned long) --> void", pybind11::arg("__n"));
		cl.def("__getitem__", (unsigned int & (std::vector<unsigned int>::*)(unsigned long)) &std::vector<unsigned int>::operator[], "C++: std::vector<unsigned int>::operator[](unsigned long) --> unsigned int &", pybind11::return_value_policy::automatic, pybind11::arg("__n"));
		cl.def("at", (unsigned int & (std::vector<unsigned int>::*)(unsigned long)) &std::vector<unsigned int>::at, "C++: std::vector<unsigned int>::at(unsigned long) --> unsigned int &", pybind11::return_value_policy::automatic, pybind11::arg("__n"));
		cl.def("front", (unsigned int & (std::vector<unsigned int>::*)()) &std::vector<unsigned int>::front, "C++: std::vector<unsigned int>::front() --> unsigned int &", pybind11::return_value_policy::automatic);
		cl.def("back", (unsigned int & (std::vector<unsigned int>::*)()) &std::vector<unsigned int>::back, "C++: std::vector<unsigned int>::back() --> unsigned int &", pybind11::return_value_policy::automatic);
		cl.def("data", (unsigned int * (std::vector<unsigned int>::*)()) &std::vector<unsigned int>::data, "C++: std::vector<unsigned int>::data() --> unsigned int *", pybind11::return_value_policy::automatic);
		cl.def("push_back", (void (std::vector<unsigned int>::*)(const unsigned int &)) &std::vector<unsigned int>::push_back, "C++: std::vector<unsigned int>::push_back(const unsigned int &) --> void", pybind11::arg("__x"));
		cl.def("pop_back", (void (std::vector<unsigned int>::*)()) &std::vector<unsigned int>::pop_back, "C++: std::vector<unsigned int>::pop_back() --> void");
		cl.def("insert", (class __gnu_cxx::__normal_iterator<unsigned int *, class std::vector<unsigned int, class std::allocator<unsigned int> > > (std::vector<unsigned int>::*)(class __gnu_cxx::__normal_iterator<const unsigned int *, class std::vector<unsigned int, class std::allocator<unsigned int> > >, const unsigned int &)) &std::vector<unsigned int>::insert, "C++: std::vector<unsigned int>::insert(class __gnu_cxx::__normal_iterator<const unsigned int *, class std::vector<unsigned int, class std::allocator<unsigned int> > >, const unsigned int &) --> class __gnu_cxx::__normal_iterator<unsigned int *, class std::vector<unsigned int, class std::allocator<unsigned int> > >", pybind11::arg("__position"), pybind11::arg("__x"));
		cl.def("insert", (class __gnu_cxx::__normal_iterator<unsigned int *, class std::vector<unsigned int, class std::allocator<unsigned int> > > (std::vector<unsigned int>::*)(class __gnu_cxx::__normal_iterator<const unsigned int *, class std::vector<unsigned int, class std::allocator<unsigned int> > >, unsigned long, const unsigned int &)) &std::vector<unsigned int>::insert, "C++: std::vector<unsigned int>::insert(class __gnu_cxx::__normal_iterator<const unsigned int *, class std::vector<unsigned int, class std::allocator<unsigned int> > >, unsigned long, const unsigned int &) --> class __gnu_cxx::__normal_iterator<unsigned int *, class std::vector<unsigned int, class std::allocator<unsigned int> > >", pybind11::arg("__position"), pybind11::arg("__n"), pybind11::arg("__x"));
		cl.def("erase", (class __gnu_cxx::__normal_iterator<unsigned int *, class std::vector<unsigned int, class std::allocator<unsigned int> > > (std::vector<unsigned int>::*)(class __gnu_cxx::__normal_iterator<const unsigned int *, class std::vector<unsigned int, class std::allocator<unsigned int> > >)) &std::vector<unsigned int>::erase, "C++: std::vector<unsigned int>::erase(class __gnu_cxx::__normal_iterator<const unsigned int *, class std::vector<unsigned int, class std::allocator<unsigned int> > >) --> class __gnu_cxx::__normal_iterator<unsigned int *, class std::vector<unsigned int, class std::allocator<unsigned int> > >", pybind11::arg("__position"));
		cl.def("erase", (class __gnu_cxx::__normal_iterator<unsigned int *, class std::vector<unsigned int, class std::allocator<unsigned int> > > (std::vector<unsigned int>::*)(class __gnu_cxx::__normal_iterator<const unsigned int *, class std::vector<unsigned int, class std::allocator<unsigned int> > >, class __gnu_cxx::__normal_iterator<const unsigned int *, class std::vector<unsigned int, class std::allocator<unsigned int> > >)) &std::vector<unsigned int>::erase, "C++: std::vector<unsigned int>::erase(class __gnu_cxx::__normal_iterator<const unsigned int *, class std::vector<unsigned int, class std::allocator<unsigned int> > >, class __gnu_cxx::__normal_iterator<const unsigned int *, class std::vector<unsigned int, class std::allocator<unsigned int> > >) --> class __gnu_cxx::__normal_iterator<unsigned int *, class std::vector<unsigned int, class std::allocator<unsigned int> > >", pybind11::arg("__first"), pybind11::arg("__last"));
		cl.def("swap", (void (std::vector<unsigned int>::*)(class std::vector<unsigned int, class std::allocator<unsigned int> > &)) &std::vector<unsigned int>::swap, "C++: std::vector<unsigned int>::swap(class std::vector<unsigned int, class std::allocator<unsigned int> > &) --> void", pybind11::arg("__x"));
		cl.def("clear", (void (std::vector<unsigned int>::*)()) &std::vector<unsigned int>::clear, "C++: std::vector<unsigned int>::clear() --> void");
	}
}


// File: std/chrono.cpp
#include <chrono>
#include <filesystem>
#include <ratio>
#include <sstream> // __str__

#include <functional>
#include <pybind11/pybind11.h>
#include <string>

#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

void bind_std_chrono(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // std::chrono::duration file:chrono line:300
		pybind11::class_<std::chrono::duration<long,std::ratio<1, 1>>, std::shared_ptr<std::chrono::duration<long,std::ratio<1, 1>>>> cl(M("std::chrono"), "duration_long_std_ratio_1_1_t", "");
		cl.def( pybind11::init( [](){ return new std::chrono::duration<long,std::ratio<1, 1>>(); } ) );
		cl.def( pybind11::init( [](std::chrono::duration<long,std::ratio<1, 1>> const &o){ return new std::chrono::duration<long,std::ratio<1, 1>>(o); } ) );
		cl.def("assign", (struct std::chrono::duration<long, struct std::ratio<1, 1> > & (std::chrono::duration<long,std::ratio<1, 1>>::*)(const struct std::chrono::duration<long, struct std::ratio<1, 1> > &)) &std::chrono::duration<long, std::ratio<1, 1> >::operator=, "C++: std::chrono::duration<long, std::ratio<1, 1> >::operator=(const struct std::chrono::duration<long, struct std::ratio<1, 1> > &) --> struct std::chrono::duration<long, struct std::ratio<1, 1> > &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		cl.def("count", (long (std::chrono::duration<long,std::ratio<1, 1>>::*)() const) &std::chrono::duration<long, std::ratio<1, 1> >::count, "C++: std::chrono::duration<long, std::ratio<1, 1> >::count() const --> long");
		cl.def("__add__", (struct std::chrono::duration<long, struct std::ratio<1, 1> > (std::chrono::duration<long,std::ratio<1, 1>>::*)() const) &std::chrono::duration<long, std::ratio<1, 1> >::operator+, "C++: std::chrono::duration<long, std::ratio<1, 1> >::operator+() const --> struct std::chrono::duration<long, struct std::ratio<1, 1> >");
		cl.def("__sub__", (struct std::chrono::duration<long, struct std::ratio<1, 1> > (std::chrono::duration<long,std::ratio<1, 1>>::*)() const) &std::chrono::duration<long, std::ratio<1, 1> >::operator-, "C++: std::chrono::duration<long, std::ratio<1, 1> >::operator-() const --> struct std::chrono::duration<long, struct std::ratio<1, 1> >");
		cl.def("plus_plus", (struct std::chrono::duration<long, struct std::ratio<1, 1> > & (std::chrono::duration<long,std::ratio<1, 1>>::*)()) &std::chrono::duration<long, std::ratio<1, 1> >::operator++, "C++: std::chrono::duration<long, std::ratio<1, 1> >::operator++() --> struct std::chrono::duration<long, struct std::ratio<1, 1> > &", pybind11::return_value_policy::automatic);
		cl.def("plus_plus", (struct std::chrono::duration<long, struct std::ratio<1, 1> > (std::chrono::duration<long,std::ratio<1, 1>>::*)(int)) &std::chrono::duration<long, std::ratio<1, 1> >::operator++, "C++: std::chrono::duration<long, std::ratio<1, 1> >::operator++(int) --> struct std::chrono::duration<long, struct std::ratio<1, 1> >", pybind11::arg(""));
		cl.def("minus_minus", (struct std::chrono::duration<long, struct std::ratio<1, 1> > & (std::chrono::duration<long,std::ratio<1, 1>>::*)()) &std::chrono::duration<long, std::ratio<1, 1> >::operator--, "C++: std::chrono::duration<long, std::ratio<1, 1> >::operator--() --> struct std::chrono::duration<long, struct std::ratio<1, 1> > &", pybind11::return_value_policy::automatic);
		cl.def("minus_minus", (struct std::chrono::duration<long, struct std::ratio<1, 1> > (std::chrono::duration<long,std::ratio<1, 1>>::*)(int)) &std::chrono::duration<long, std::ratio<1, 1> >::operator--, "C++: std::chrono::duration<long, std::ratio<1, 1> >::operator--(int) --> struct std::chrono::duration<long, struct std::ratio<1, 1> >", pybind11::arg(""));
		cl.def("__iadd__", (struct std::chrono::duration<long, struct std::ratio<1, 1> > & (std::chrono::duration<long,std::ratio<1, 1>>::*)(const struct std::chrono::duration<long, struct std::ratio<1, 1> > &)) &std::chrono::duration<long, std::ratio<1, 1> >::operator+=, "C++: std::chrono::duration<long, std::ratio<1, 1> >::operator+=(const struct std::chrono::duration<long, struct std::ratio<1, 1> > &) --> struct std::chrono::duration<long, struct std::ratio<1, 1> > &", pybind11::return_value_policy::automatic, pybind11::arg("__d"));
		cl.def("__isub__", (struct std::chrono::duration<long, struct std::ratio<1, 1> > & (std::chrono::duration<long,std::ratio<1, 1>>::*)(const struct std::chrono::duration<long, struct std::ratio<1, 1> > &)) &std::chrono::duration<long, std::ratio<1, 1> >::operator-=, "C++: std::chrono::duration<long, std::ratio<1, 1> >::operator-=(const struct std::chrono::duration<long, struct std::ratio<1, 1> > &) --> struct std::chrono::duration<long, struct std::ratio<1, 1> > &", pybind11::return_value_policy::automatic, pybind11::arg("__d"));
		cl.def("__imul__", (struct std::chrono::duration<long, struct std::ratio<1, 1> > & (std::chrono::duration<long,std::ratio<1, 1>>::*)(const long &)) &std::chrono::duration<long, std::ratio<1, 1> >::operator*=, "C++: std::chrono::duration<long, std::ratio<1, 1> >::operator*=(const long &) --> struct std::chrono::duration<long, struct std::ratio<1, 1> > &", pybind11::return_value_policy::automatic, pybind11::arg("__rhs"));
		cl.def("__idiv__", (struct std::chrono::duration<long, struct std::ratio<1, 1> > & (std::chrono::duration<long,std::ratio<1, 1>>::*)(const long &)) &std::chrono::duration<long, std::ratio<1, 1> >::operator/=, "C++: std::chrono::duration<long, std::ratio<1, 1> >::operator/=(const long &) --> struct std::chrono::duration<long, struct std::ratio<1, 1> > &", pybind11::return_value_policy::automatic, pybind11::arg("__rhs"));
		cl.def_static("zero", (struct std::chrono::duration<long, struct std::ratio<1, 1> > (*)()) &std::chrono::duration<long, std::ratio<1, 1> >::zero, "C++: std::chrono::duration<long, std::ratio<1, 1> >::zero() --> struct std::chrono::duration<long, struct std::ratio<1, 1> >");
		cl.def_static("min", (struct std::chrono::duration<long, struct std::ratio<1, 1> > (*)()) &std::chrono::duration<long, std::ratio<1, 1> >::min, "C++: std::chrono::duration<long, std::ratio<1, 1> >::min() --> struct std::chrono::duration<long, struct std::ratio<1, 1> >");
		cl.def_static("max", (struct std::chrono::duration<long, struct std::ratio<1, 1> > (*)()) &std::chrono::duration<long, std::ratio<1, 1> >::max, "C++: std::chrono::duration<long, std::ratio<1, 1> >::max() --> struct std::chrono::duration<long, struct std::ratio<1, 1> >");
	}
	{ // std::chrono::time_point file:chrono line:626
		pybind11::class_<std::chrono::time_point<std::chrono::_V2::system_clock,std::chrono::duration<long, std::ratio<1, 1> >>, std::shared_ptr<std::chrono::time_point<std::chrono::_V2::system_clock,std::chrono::duration<long, std::ratio<1, 1> >>>> cl(M("std::chrono"), "time_point_std_chrono__V2_system_clock_std_chrono_duration_long_std_ratio_1_1_t", "");
		cl.def( pybind11::init( [](){ return new std::chrono::time_point<std::chrono::_V2::system_clock,std::chrono::duration<long, std::ratio<1, 1> >>(); } ) );
		cl.def( pybind11::init<const struct std::chrono::duration<long, struct std::ratio<1, 1> > &>(), pybind11::arg("__dur") );

		cl.def( pybind11::init( [](std::chrono::time_point<std::chrono::_V2::system_clock,std::chrono::duration<long, std::ratio<1, 1> >> const &o){ return new std::chrono::time_point<std::chrono::_V2::system_clock,std::chrono::duration<long, std::ratio<1, 1> >>(o); } ) );
		cl.def("time_since_epoch", (struct std::chrono::duration<long, struct std::ratio<1, 1> > (std::chrono::time_point<std::chrono::_V2::system_clock,std::chrono::duration<long, std::ratio<1, 1> >>::*)() const) &std::chrono::time_point<std::chrono::_V2::system_clock, std::chrono::duration<long, std::ratio<1, 1> > >::time_since_epoch, "C++: std::chrono::time_point<std::chrono::_V2::system_clock, std::chrono::duration<long, std::ratio<1, 1> > >::time_since_epoch() const --> struct std::chrono::duration<long, struct std::ratio<1, 1> >");
		cl.def("__iadd__", (struct std::chrono::time_point<struct std::chrono::_V2::system_clock, struct std::chrono::duration<long, struct std::ratio<1, 1> > > & (std::chrono::time_point<std::chrono::_V2::system_clock,std::chrono::duration<long, std::ratio<1, 1> >>::*)(const struct std::chrono::duration<long, struct std::ratio<1, 1> > &)) &std::chrono::time_point<std::chrono::_V2::system_clock, std::chrono::duration<long, std::ratio<1, 1> > >::operator+=, "C++: std::chrono::time_point<std::chrono::_V2::system_clock, std::chrono::duration<long, std::ratio<1, 1> > >::operator+=(const struct std::chrono::duration<long, struct std::ratio<1, 1> > &) --> struct std::chrono::time_point<struct std::chrono::_V2::system_clock, struct std::chrono::duration<long, struct std::ratio<1, 1> > > &", pybind11::return_value_policy::automatic, pybind11::arg("__dur"));
		cl.def("__isub__", (struct std::chrono::time_point<struct std::chrono::_V2::system_clock, struct std::chrono::duration<long, struct std::ratio<1, 1> > > & (std::chrono::time_point<std::chrono::_V2::system_clock,std::chrono::duration<long, std::ratio<1, 1> >>::*)(const struct std::chrono::duration<long, struct std::ratio<1, 1> > &)) &std::chrono::time_point<std::chrono::_V2::system_clock, std::chrono::duration<long, std::ratio<1, 1> > >::operator-=, "C++: std::chrono::time_point<std::chrono::_V2::system_clock, std::chrono::duration<long, std::ratio<1, 1> > >::operator-=(const struct std::chrono::duration<long, struct std::ratio<1, 1> > &) --> struct std::chrono::time_point<struct std::chrono::_V2::system_clock, struct std::chrono::duration<long, struct std::ratio<1, 1> > > &", pybind11::return_value_policy::automatic, pybind11::arg("__dur"));
		cl.def_static("min", (struct std::chrono::time_point<struct std::chrono::_V2::system_clock, struct std::chrono::duration<long, struct std::ratio<1, 1> > > (*)()) &std::chrono::time_point<std::chrono::_V2::system_clock, std::chrono::duration<long, std::ratio<1, 1> > >::min, "C++: std::chrono::time_point<std::chrono::_V2::system_clock, std::chrono::duration<long, std::ratio<1, 1> > >::min() --> struct std::chrono::time_point<struct std::chrono::_V2::system_clock, struct std::chrono::duration<long, struct std::ratio<1, 1> > >");
		cl.def_static("max", (struct std::chrono::time_point<struct std::chrono::_V2::system_clock, struct std::chrono::duration<long, struct std::ratio<1, 1> > > (*)()) &std::chrono::time_point<std::chrono::_V2::system_clock, std::chrono::duration<long, std::ratio<1, 1> > >::max, "C++: std::chrono::time_point<std::chrono::_V2::system_clock, std::chrono::duration<long, std::ratio<1, 1> > >::max() --> struct std::chrono::time_point<struct std::chrono::_V2::system_clock, struct std::chrono::duration<long, struct std::ratio<1, 1> > >");
		cl.def("assign", (struct std::chrono::time_point<struct std::chrono::_V2::system_clock, struct std::chrono::duration<long, struct std::ratio<1, 1> > > & (std::chrono::time_point<std::chrono::_V2::system_clock,std::chrono::duration<long, std::ratio<1, 1> >>::*)(const struct std::chrono::time_point<struct std::chrono::_V2::system_clock, struct std::chrono::duration<long, struct std::ratio<1, 1> > > &)) &std::chrono::time_point<std::chrono::_V2::system_clock, std::chrono::duration<long, std::ratio<1, 1> > >::operator=, "C++: std::chrono::time_point<std::chrono::_V2::system_clock, std::chrono::duration<long, std::ratio<1, 1> > >::operator=(const struct std::chrono::time_point<struct std::chrono::_V2::system_clock, struct std::chrono::duration<long, struct std::ratio<1, 1> > > &) --> struct std::chrono::time_point<struct std::chrono::_V2::system_clock, struct std::chrono::duration<long, struct std::ratio<1, 1> > > &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
}


// File: unknown/unknown.cpp
#include <sstream> // __str__

#include <functional>
#include <pybind11/pybind11.h>
#include <string>

#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

void bind_unknown_unknown(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // absl::time_internal::cctz::detail::civil_time file: line:372
		pybind11::class_<absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>, std::shared_ptr<absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>>> cl(M("absl::time_internal::cctz::detail"), "civil_time_absl_time_internal_cctz_detail_second_tag_t", "");
		cl.def( pybind11::init( [](long const & a0){ return new absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>(a0); } ), "doc" , pybind11::arg("y"));
		cl.def( pybind11::init( [](long const & a0, long const & a1){ return new absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>(a0, a1); } ), "doc" , pybind11::arg("y"), pybind11::arg("m"));
		cl.def( pybind11::init( [](long const & a0, long const & a1, long const & a2){ return new absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>(a0, a1, a2); } ), "doc" , pybind11::arg("y"), pybind11::arg("m"), pybind11::arg("d"));
		cl.def( pybind11::init( [](long const & a0, long const & a1, long const & a2, long const & a3){ return new absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>(a0, a1, a2, a3); } ), "doc" , pybind11::arg("y"), pybind11::arg("m"), pybind11::arg("d"), pybind11::arg("hh"));
		cl.def( pybind11::init( [](long const & a0, long const & a1, long const & a2, long const & a3, long const & a4){ return new absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>(a0, a1, a2, a3, a4); } ), "doc" , pybind11::arg("y"), pybind11::arg("m"), pybind11::arg("d"), pybind11::arg("hh"), pybind11::arg("mm"));
		cl.def( pybind11::init<long, long, long, long, long, long>(), pybind11::arg("y"), pybind11::arg("m"), pybind11::arg("d"), pybind11::arg("hh"), pybind11::arg("mm"), pybind11::arg("ss") );

		cl.def( pybind11::init( [](){ return new absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>(); } ) );
		cl.def( pybind11::init( [](absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag> const &o){ return new absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>(o); } ) );
		cl.def("assign", (class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::cctz::detail::second_tag> & (absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::*)(const class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::cctz::detail::second_tag> &)) &absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::operator=, "C++: absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::operator=(const class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::cctz::detail::second_tag> &) --> class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::cctz::detail::second_tag> &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		cl.def_static("max", (class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::cctz::detail::second_tag> (*)()) &absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::max, "C++: absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::max() --> class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::cctz::detail::second_tag>");
		cl.def_static("min", (class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::cctz::detail::second_tag> (*)()) &absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::min, "C++: absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::min() --> class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::cctz::detail::second_tag>");
		cl.def("year", (long (absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::*)() const) &absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::year, "C++: absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::year() const --> long");
		cl.def("month", (int (absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::*)() const) &absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::month, "C++: absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::month() const --> int");
		cl.def("day", (int (absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::*)() const) &absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::day, "C++: absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::day() const --> int");
		cl.def("hour", (int (absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::*)() const) &absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::hour, "C++: absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::hour() const --> int");
		cl.def("minute", (int (absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::*)() const) &absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::minute, "C++: absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::minute() const --> int");
		cl.def("second", (int (absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::*)() const) &absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::second, "C++: absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::second() const --> int");
		cl.def("__iadd__", (class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::cctz::detail::second_tag> & (absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::*)(long)) &absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::operator+=, "C++: absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::operator+=(long) --> class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::cctz::detail::second_tag> &", pybind11::return_value_policy::automatic, pybind11::arg("n"));
		cl.def("__isub__", (class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::cctz::detail::second_tag> & (absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::*)(long)) &absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::operator-=, "C++: absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::operator-=(long) --> class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::cctz::detail::second_tag> &", pybind11::return_value_policy::automatic, pybind11::arg("n"));
		cl.def("plus_plus", (class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::cctz::detail::second_tag> & (absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::*)()) &absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::operator++, "C++: absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::operator++() --> class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::cctz::detail::second_tag> &", pybind11::return_value_policy::automatic);
		cl.def("plus_plus", (class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::cctz::detail::second_tag> (absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::*)(int)) &absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::operator++, "C++: absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::operator++(int) --> class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::cctz::detail::second_tag>", pybind11::arg(""));
		cl.def("minus_minus", (class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::cctz::detail::second_tag> & (absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::*)()) &absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::operator--, "C++: absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::operator--() --> class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::cctz::detail::second_tag> &", pybind11::return_value_policy::automatic);
		cl.def("minus_minus", (class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::cctz::detail::second_tag> (absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::*)(int)) &absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::operator--, "C++: absl::time_internal::cctz::detail::civil_time<absl::time_internal::cctz::detail::second_tag>::operator--(int) --> class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::cctz::detail::second_tag>", pybind11::arg(""));
	}
	{ // absl::time_internal::cctz::detail::civil_time file: line:372
		pybind11::class_<absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>, std::shared_ptr<absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>>> cl(M("absl::time_internal::cctz::detail"), "civil_time_absl_time_internal_second_tag_t", "");
		cl.def( pybind11::init( [](long const & a0){ return new absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>(a0); } ), "doc" , pybind11::arg("y"));
		cl.def( pybind11::init( [](long const & a0, long const & a1){ return new absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>(a0, a1); } ), "doc" , pybind11::arg("y"), pybind11::arg("m"));
		cl.def( pybind11::init( [](long const & a0, long const & a1, long const & a2){ return new absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>(a0, a1, a2); } ), "doc" , pybind11::arg("y"), pybind11::arg("m"), pybind11::arg("d"));
		cl.def( pybind11::init( [](long const & a0, long const & a1, long const & a2, long const & a3){ return new absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>(a0, a1, a2, a3); } ), "doc" , pybind11::arg("y"), pybind11::arg("m"), pybind11::arg("d"), pybind11::arg("hh"));
		cl.def( pybind11::init( [](long const & a0, long const & a1, long const & a2, long const & a3, long const & a4){ return new absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>(a0, a1, a2, a3, a4); } ), "doc" , pybind11::arg("y"), pybind11::arg("m"), pybind11::arg("d"), pybind11::arg("hh"), pybind11::arg("mm"));
		cl.def( pybind11::init<long, long, long, long, long, long>(), pybind11::arg("y"), pybind11::arg("m"), pybind11::arg("d"), pybind11::arg("hh"), pybind11::arg("mm"), pybind11::arg("ss") );

		cl.def( pybind11::init( [](){ return new absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>(); } ) );
		cl.def( pybind11::init( [](absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag> const &o){ return new absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>(o); } ) );
		cl.def("assign", (class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::second_tag> & (absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::*)(const class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::second_tag> &)) &absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::operator=, "C++: absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::operator=(const class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::second_tag> &) --> class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::second_tag> &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		cl.def_static("max", (class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::second_tag> (*)()) &absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::max, "C++: absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::max() --> class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::second_tag>");
		cl.def_static("min", (class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::second_tag> (*)()) &absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::min, "C++: absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::min() --> class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::second_tag>");
		cl.def("year", (long (absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::*)() const) &absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::year, "C++: absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::year() const --> long");
		cl.def("month", (int (absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::*)() const) &absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::month, "C++: absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::month() const --> int");
		cl.def("day", (int (absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::*)() const) &absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::day, "C++: absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::day() const --> int");
		cl.def("hour", (int (absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::*)() const) &absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::hour, "C++: absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::hour() const --> int");
		cl.def("minute", (int (absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::*)() const) &absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::minute, "C++: absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::minute() const --> int");
		cl.def("second", (int (absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::*)() const) &absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::second, "C++: absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::second() const --> int");
		cl.def("__iadd__", (class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::second_tag> & (absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::*)(long)) &absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::operator+=, "C++: absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::operator+=(long) --> class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::second_tag> &", pybind11::return_value_policy::automatic, pybind11::arg("n"));
		cl.def("__isub__", (class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::second_tag> & (absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::*)(long)) &absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::operator-=, "C++: absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::operator-=(long) --> class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::second_tag> &", pybind11::return_value_policy::automatic, pybind11::arg("n"));
		cl.def("plus_plus", (class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::second_tag> & (absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::*)()) &absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::operator++, "C++: absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::operator++() --> class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::second_tag> &", pybind11::return_value_policy::automatic);
		cl.def("plus_plus", (class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::second_tag> (absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::*)(int)) &absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::operator++, "C++: absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::operator++(int) --> class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::second_tag>", pybind11::arg(""));
		cl.def("minus_minus", (class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::second_tag> & (absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::*)()) &absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::operator--, "C++: absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::operator--() --> class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::second_tag> &", pybind11::return_value_policy::automatic);
		cl.def("minus_minus", (class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::second_tag> (absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::*)(int)) &absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::operator--, "C++: absl::time_internal::cctz::detail::civil_time<absl::time_internal::second_tag>::operator--(int) --> class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::second_tag>", pybind11::arg(""));
	}
}


// File: unknown/unknown_1.cpp
#include <chrono>
#include <iterator>
#include <memory>
#include <ratio>
#include <sstream> // __str__
#include <string>
#include <string_view>

#include <functional>
#include <pybind11/pybind11.h>
#include <string>

#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

void bind_unknown_unknown_1(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // absl::time_internal::cctz::time_zone file: line:78
		pybind11::class_<absl::time_internal::cctz::time_zone, std::shared_ptr<absl::time_internal::cctz::time_zone>> cl(M("absl::time_internal::cctz"), "time_zone", "");
		cl.def( pybind11::init( [](){ return new absl::time_internal::cctz::time_zone(); } ) );
		cl.def( pybind11::init( [](absl::time_internal::cctz::time_zone const &o){ return new absl::time_internal::cctz::time_zone(o); } ) );
		cl.def("assign", (class absl::time_internal::cctz::time_zone & (absl::time_internal::cctz::time_zone::*)(const class absl::time_internal::cctz::time_zone &)) &absl::time_internal::cctz::time_zone::operator=, "C++: absl::time_internal::cctz::time_zone::operator=(const class absl::time_internal::cctz::time_zone &) --> class absl::time_internal::cctz::time_zone &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		cl.def("name", (std::string (absl::time_internal::cctz::time_zone::*)() const) &absl::time_internal::cctz::time_zone::name, "C++: absl::time_internal::cctz::time_zone::name() const --> std::string");
		cl.def("lookup", (struct absl::time_internal::cctz::time_zone::absolute_lookup (absl::time_internal::cctz::time_zone::*)(const struct std::chrono::time_point<struct std::chrono::_V2::system_clock, struct std::chrono::duration<long, struct std::ratio<1, 1> > > &) const) &absl::time_internal::cctz::time_zone::lookup, "C++: absl::time_internal::cctz::time_zone::lookup(const struct std::chrono::time_point<struct std::chrono::_V2::system_clock, struct std::chrono::duration<long, struct std::ratio<1, 1> > > &) const --> struct absl::time_internal::cctz::time_zone::absolute_lookup", pybind11::arg("tp"));
		cl.def("lookup", (struct absl::time_internal::cctz::time_zone::civil_lookup (absl::time_internal::cctz::time_zone::*)(const class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::cctz::detail::second_tag> &) const) &absl::time_internal::cctz::time_zone::lookup, "C++: absl::time_internal::cctz::time_zone::lookup(const class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::cctz::detail::second_tag> &) const --> struct absl::time_internal::cctz::time_zone::civil_lookup", pybind11::arg("cs"));
		cl.def("next_transition", (bool (absl::time_internal::cctz::time_zone::*)(const struct std::chrono::time_point<struct std::chrono::_V2::system_clock, struct std::chrono::duration<long, struct std::ratio<1, 1> > > &, struct absl::time_internal::cctz::time_zone::civil_transition *) const) &absl::time_internal::cctz::time_zone::next_transition, "C++: absl::time_internal::cctz::time_zone::next_transition(const struct std::chrono::time_point<struct std::chrono::_V2::system_clock, struct std::chrono::duration<long, struct std::ratio<1, 1> > > &, struct absl::time_internal::cctz::time_zone::civil_transition *) const --> bool", pybind11::arg("tp"), pybind11::arg("trans"));
		cl.def("prev_transition", (bool (absl::time_internal::cctz::time_zone::*)(const struct std::chrono::time_point<struct std::chrono::_V2::system_clock, struct std::chrono::duration<long, struct std::ratio<1, 1> > > &, struct absl::time_internal::cctz::time_zone::civil_transition *) const) &absl::time_internal::cctz::time_zone::prev_transition, "C++: absl::time_internal::cctz::time_zone::prev_transition(const struct std::chrono::time_point<struct std::chrono::_V2::system_clock, struct std::chrono::duration<long, struct std::ratio<1, 1> > > &, struct absl::time_internal::cctz::time_zone::civil_transition *) const --> bool", pybind11::arg("tp"), pybind11::arg("trans"));
		cl.def("version", (std::string (absl::time_internal::cctz::time_zone::*)() const) &absl::time_internal::cctz::time_zone::version, "C++: absl::time_internal::cctz::time_zone::version() const --> std::string");
		cl.def("description", (std::string (absl::time_internal::cctz::time_zone::*)() const) &absl::time_internal::cctz::time_zone::description, "C++: absl::time_internal::cctz::time_zone::description() const --> std::string");

		{ // absl::time_internal::cctz::time_zone::absolute_lookup file: line:95
			auto & enclosing_class = cl;
			pybind11::class_<absl::time_internal::cctz::time_zone::absolute_lookup, std::shared_ptr<absl::time_internal::cctz::time_zone::absolute_lookup>> cl(enclosing_class, "absolute_lookup", "");
			cl.def( pybind11::init( [](){ return new absl::time_internal::cctz::time_zone::absolute_lookup(); } ) );
			cl.def( pybind11::init( [](absl::time_internal::cctz::time_zone::absolute_lookup const &o){ return new absl::time_internal::cctz::time_zone::absolute_lookup(o); } ) );
			cl.def_readwrite("cs", &absl::time_internal::cctz::time_zone::absolute_lookup::cs);
			cl.def_readwrite("offset", &absl::time_internal::cctz::time_zone::absolute_lookup::offset);
			cl.def_readwrite("is_dst", &absl::time_internal::cctz::time_zone::absolute_lookup::is_dst);
		}

		{ // absl::time_internal::cctz::time_zone::civil_lookup file: line:152
			auto & enclosing_class = cl;
			pybind11::class_<absl::time_internal::cctz::time_zone::civil_lookup, std::shared_ptr<absl::time_internal::cctz::time_zone::civil_lookup>> cl(enclosing_class, "civil_lookup", "");
			cl.def( pybind11::init( [](){ return new absl::time_internal::cctz::time_zone::civil_lookup(); } ) );

			pybind11::enum_<absl::time_internal::cctz::time_zone::civil_lookup::civil_kind>(cl, "civil_kind", pybind11::arithmetic(), "")
				.value("UNIQUE", absl::time_internal::cctz::time_zone::civil_lookup::UNIQUE)
				.value("SKIPPED", absl::time_internal::cctz::time_zone::civil_lookup::SKIPPED)
				.value("REPEATED", absl::time_internal::cctz::time_zone::civil_lookup::REPEATED)
				.export_values();

			cl.def_readwrite("kind", &absl::time_internal::cctz::time_zone::civil_lookup::kind);
			cl.def_readwrite("pre", &absl::time_internal::cctz::time_zone::civil_lookup::pre);
			cl.def_readwrite("trans", &absl::time_internal::cctz::time_zone::civil_lookup::trans);
			cl.def_readwrite("post", &absl::time_internal::cctz::time_zone::civil_lookup::post);
		}

		{ // absl::time_internal::cctz::time_zone::civil_transition file: line:192
			auto & enclosing_class = cl;
			pybind11::class_<absl::time_internal::cctz::time_zone::civil_transition, std::shared_ptr<absl::time_internal::cctz::time_zone::civil_transition>> cl(enclosing_class, "civil_transition", "");
			cl.def( pybind11::init( [](){ return new absl::time_internal::cctz::time_zone::civil_transition(); } ) );
			cl.def( pybind11::init( [](absl::time_internal::cctz::time_zone::civil_transition const &o){ return new absl::time_internal::cctz::time_zone::civil_transition(o); } ) );
			cl.def_readwrite("from", &absl::time_internal::cctz::time_zone::civil_transition::from);
			cl.def_readwrite("to", &absl::time_internal::cctz::time_zone::civil_transition::to);
		}

	}
}


// File: unknown/unknown_2.cpp
#include <bits/types/struct_timeval.h>
#include <chrono>
#include <iterator>
#include <memory>
#include <ratio>
#include <sstream> // __str__
#include <string>
#include <string_view>
#include <time.h>

#include <functional>
#include <pybind11/pybind11.h>
#include <string>

#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

void bind_unknown_unknown_2(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // absl::Duration file: line:159
		pybind11::class_<absl::Duration, std::shared_ptr<absl::Duration>> cl(M("absl"), "Duration", "");
		cl.def( pybind11::init( [](){ return new absl::Duration(); } ) );
		cl.def( pybind11::init( [](absl::Duration const &o){ return new absl::Duration(o); } ) );
		cl.def("__imul__", (class absl::Duration & (absl::Duration::*)(long)) &absl::Duration::operator*=<long>, "C++: absl::Duration::operator*=(long) --> class absl::Duration &", pybind11::return_value_policy::automatic, pybind11::arg("r"));
		cl.def("__imul__", (class absl::Duration & (absl::Duration::*)(double)) &absl::Duration::operator*=<double>, "C++: absl::Duration::operator*=(double) --> class absl::Duration &", pybind11::return_value_policy::automatic, pybind11::arg("r"));
		cl.def("__idiv__", (class absl::Duration & (absl::Duration::*)(long)) &absl::Duration::operator/=<long>, "C++: absl::Duration::operator/=(long) --> class absl::Duration &", pybind11::return_value_policy::automatic, pybind11::arg("r"));
		cl.def("__idiv__", (class absl::Duration & (absl::Duration::*)(double)) &absl::Duration::operator/=<double>, "C++: absl::Duration::operator/=(double) --> class absl::Duration &", pybind11::return_value_policy::automatic, pybind11::arg("r"));
		cl.def("assign", (class absl::Duration & (absl::Duration::*)(const class absl::Duration &)) &absl::Duration::operator=, "C++: absl::Duration::operator=(const class absl::Duration &) --> class absl::Duration &", pybind11::return_value_policy::automatic, pybind11::arg("d"));
		cl.def("__iadd__", (class absl::Duration & (absl::Duration::*)(class absl::Duration)) &absl::Duration::operator+=, "C++: absl::Duration::operator+=(class absl::Duration) --> class absl::Duration &", pybind11::return_value_policy::automatic, pybind11::arg("d"));
		cl.def("__isub__", (class absl::Duration & (absl::Duration::*)(class absl::Duration)) &absl::Duration::operator-=, "C++: absl::Duration::operator-=(class absl::Duration) --> class absl::Duration &", pybind11::return_value_policy::automatic, pybind11::arg("d"));
		cl.def("__imul__", (class absl::Duration & (absl::Duration::*)(long)) &absl::Duration::operator*=, "C++: absl::Duration::operator*=(long) --> class absl::Duration &", pybind11::return_value_policy::automatic, pybind11::arg("r"));
		cl.def("__imul__", (class absl::Duration & (absl::Duration::*)(double)) &absl::Duration::operator*=, "C++: absl::Duration::operator*=(double) --> class absl::Duration &", pybind11::return_value_policy::automatic, pybind11::arg("r"));
		cl.def("__idiv__", (class absl::Duration & (absl::Duration::*)(long)) &absl::Duration::operator/=, "C++: absl::Duration::operator/=(long) --> class absl::Duration &", pybind11::return_value_policy::automatic, pybind11::arg("r"));
		cl.def("__idiv__", (class absl::Duration & (absl::Duration::*)(double)) &absl::Duration::operator/=, "C++: absl::Duration::operator/=(double) --> class absl::Duration &", pybind11::return_value_policy::automatic, pybind11::arg("r"));
		cl.def("__imul__", (class absl::Duration & (absl::Duration::*)(float)) &absl::Duration::operator*=, "C++: absl::Duration::operator*=(float) --> class absl::Duration &", pybind11::return_value_policy::automatic, pybind11::arg("r"));
		cl.def("__idiv__", (class absl::Duration & (absl::Duration::*)(float)) &absl::Duration::operator/=, "C++: absl::Duration::operator/=(float) --> class absl::Duration &", pybind11::return_value_policy::automatic, pybind11::arg("r"));
	}
	{ // absl::Time file: line:602
		pybind11::class_<absl::Time, std::shared_ptr<absl::Time>> cl(M("absl"), "Time", "");
		cl.def( pybind11::init( [](){ return new absl::Time(); } ) );
		cl.def( pybind11::init( [](absl::Time const &o){ return new absl::Time(o); } ) );
		cl.def("assign", (class absl::Time & (absl::Time::*)(const class absl::Time &)) &absl::Time::operator=, "C++: absl::Time::operator=(const class absl::Time &) --> class absl::Time &", pybind11::return_value_policy::automatic, pybind11::arg("t"));
		cl.def("__iadd__", (class absl::Time & (absl::Time::*)(class absl::Duration)) &absl::Time::operator+=, "C++: absl::Time::operator+=(class absl::Duration) --> class absl::Time &", pybind11::return_value_policy::automatic, pybind11::arg("d"));
		cl.def("__isub__", (class absl::Time & (absl::Time::*)(class absl::Duration)) &absl::Time::operator-=, "C++: absl::Time::operator-=(class absl::Duration) --> class absl::Time &", pybind11::return_value_policy::automatic, pybind11::arg("d"));
		cl.def("In", (struct absl::Time::Breakdown (absl::Time::*)(class absl::TimeZone) const) &absl::Time::In, "C++: absl::Time::In(class absl::TimeZone) const --> struct absl::Time::Breakdown", pybind11::arg("tz"));

		{ // absl::Time::Breakdown file: line:641
			auto & enclosing_class = cl;
			pybind11::class_<absl::Time::Breakdown, std::shared_ptr<absl::Time::Breakdown>> cl(enclosing_class, "Breakdown", "");
			cl.def( pybind11::init( [](){ return new absl::Time::Breakdown(); } ) );
			cl.def( pybind11::init( [](absl::Time::Breakdown const &o){ return new absl::Time::Breakdown(o); } ) );
			cl.def_readwrite("year", &absl::Time::Breakdown::year);
			cl.def_readwrite("month", &absl::Time::Breakdown::month);
			cl.def_readwrite("day", &absl::Time::Breakdown::day);
			cl.def_readwrite("hour", &absl::Time::Breakdown::hour);
			cl.def_readwrite("minute", &absl::Time::Breakdown::minute);
			cl.def_readwrite("second", &absl::Time::Breakdown::second);
			cl.def_readwrite("subsecond", &absl::Time::Breakdown::subsecond);
			cl.def_readwrite("weekday", &absl::Time::Breakdown::weekday);
			cl.def_readwrite("yearday", &absl::Time::Breakdown::yearday);
			cl.def_readwrite("offset", &absl::Time::Breakdown::offset);
			cl.def_readwrite("is_dst", &absl::Time::Breakdown::is_dst);
		}

	}
	{ // absl::TimeZone file: line:861
		pybind11::class_<absl::TimeZone, std::shared_ptr<absl::TimeZone>> cl(M("absl"), "TimeZone", "");
		cl.def( pybind11::init<class absl::time_internal::cctz::time_zone>(), pybind11::arg("tz") );

		cl.def( pybind11::init( [](){ return new absl::TimeZone(); } ) );
		cl.def( pybind11::init( [](absl::TimeZone const &o){ return new absl::TimeZone(o); } ) );
		cl.def("assign", (class absl::TimeZone & (absl::TimeZone::*)(const class absl::TimeZone &)) &absl::TimeZone::operator=, "C++: absl::TimeZone::operator=(const class absl::TimeZone &) --> class absl::TimeZone &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		cl.def("name", (std::string (absl::TimeZone::*)() const) &absl::TimeZone::name, "C++: absl::TimeZone::name() const --> std::string");
		cl.def("At", (struct absl::TimeZone::CivilInfo (absl::TimeZone::*)(class absl::Time) const) &absl::TimeZone::At, "C++: absl::TimeZone::At(class absl::Time) const --> struct absl::TimeZone::CivilInfo", pybind11::arg("t"));
		cl.def("At", (struct absl::TimeZone::TimeInfo (absl::TimeZone::*)(class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::second_tag>) const) &absl::TimeZone::At, "C++: absl::TimeZone::At(class absl::time_internal::cctz::detail::civil_time<struct absl::time_internal::second_tag>) const --> struct absl::TimeZone::TimeInfo", pybind11::arg("ct"));
		cl.def("NextTransition", (bool (absl::TimeZone::*)(class absl::Time, struct absl::TimeZone::CivilTransition *) const) &absl::TimeZone::NextTransition, "C++: absl::TimeZone::NextTransition(class absl::Time, struct absl::TimeZone::CivilTransition *) const --> bool", pybind11::arg("t"), pybind11::arg("trans"));
		cl.def("PrevTransition", (bool (absl::TimeZone::*)(class absl::Time, struct absl::TimeZone::CivilTransition *) const) &absl::TimeZone::PrevTransition, "C++: absl::TimeZone::PrevTransition(class absl::Time, struct absl::TimeZone::CivilTransition *) const --> bool", pybind11::arg("t"), pybind11::arg("trans"));

		{ // absl::TimeZone::CivilInfo file: line:880
			auto & enclosing_class = cl;
			pybind11::class_<absl::TimeZone::CivilInfo, std::shared_ptr<absl::TimeZone::CivilInfo>> cl(enclosing_class, "CivilInfo", "");
			cl.def( pybind11::init( [](){ return new absl::TimeZone::CivilInfo(); } ) );
			cl.def( pybind11::init( [](absl::TimeZone::CivilInfo const &o){ return new absl::TimeZone::CivilInfo(o); } ) );
			cl.def_readwrite("cs", &absl::TimeZone::CivilInfo::cs);
			cl.def_readwrite("subsecond", &absl::TimeZone::CivilInfo::subsecond);
			cl.def_readwrite("offset", &absl::TimeZone::CivilInfo::offset);
			cl.def_readwrite("is_dst", &absl::TimeZone::CivilInfo::is_dst);
		}

		{ // absl::TimeZone::TimeInfo file: line:924
			auto & enclosing_class = cl;
			pybind11::class_<absl::TimeZone::TimeInfo, std::shared_ptr<absl::TimeZone::TimeInfo>> cl(enclosing_class, "TimeInfo", "");
			cl.def( pybind11::init( [](){ return new absl::TimeZone::TimeInfo(); } ) );
			cl.def( pybind11::init( [](absl::TimeZone::TimeInfo const &o){ return new absl::TimeZone::TimeInfo(o); } ) );

			pybind11::enum_<absl::TimeZone::TimeInfo::CivilKind>(cl, "CivilKind", pybind11::arithmetic(), "")
				.value("UNIQUE", absl::TimeZone::TimeInfo::UNIQUE)
				.value("SKIPPED", absl::TimeZone::TimeInfo::SKIPPED)
				.value("REPEATED", absl::TimeZone::TimeInfo::REPEATED)
				.export_values();

			cl.def_readwrite("kind", &absl::TimeZone::TimeInfo::kind);
			cl.def_readwrite("pre", &absl::TimeZone::TimeInfo::pre);
			cl.def_readwrite("trans", &absl::TimeZone::TimeInfo::trans);
			cl.def_readwrite("post", &absl::TimeZone::TimeInfo::post);
		}

		{ // absl::TimeZone::CivilTransition file: line:997
			auto & enclosing_class = cl;
			pybind11::class_<absl::TimeZone::CivilTransition, std::shared_ptr<absl::TimeZone::CivilTransition>> cl(enclosing_class, "CivilTransition", "");
			cl.def( pybind11::init( [](){ return new absl::TimeZone::CivilTransition(); } ) );
			cl.def( pybind11::init( [](absl::TimeZone::CivilTransition const &o){ return new absl::TimeZone::CivilTransition(o); } ) );
			cl.def_readwrite("from", &absl::TimeZone::CivilTransition::from);
			cl.def_readwrite("to", &absl::TimeZone::CivilTransition::to);
		}

	}
}


// File: std/fs_path.cpp
#include <filesystem>
#include <iterator>
#include <memory>
#include <sstream> // __str__
#include <string>
#include <string_view>

#include <functional>
#include <pybind11/pybind11.h>
#include <string>

#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

void bind_std_fs_path(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // std::filesystem::__cxx11::path file:bits/fs_path.h line:68
		pybind11::class_<std::filesystem::__cxx11::path, std::shared_ptr<std::filesystem::__cxx11::path>> cl(M("std::filesystem::__cxx11"), "path", "");
		cl.def( pybind11::init( [](){ return new std::filesystem::__cxx11::path(); } ) );
		cl.def( pybind11::init( [](std::filesystem::__cxx11::path const &o){ return new std::filesystem::__cxx11::path(o); } ) );

		pybind11::enum_<std::filesystem::__cxx11::path::format>(cl, "format", pybind11::arithmetic(), "")
			.value("native_format", std::filesystem::__cxx11::path::native_format)
			.value("generic_format", std::filesystem::__cxx11::path::generic_format)
			.value("auto_format", std::filesystem::__cxx11::path::auto_format)
			.export_values();

		cl.def("string", [](std::filesystem::__cxx11::path const &o) -> std::string { return o.string(); }, "");
		cl.def("string", (std::string (std::filesystem::__cxx11::path::*)(const class std::allocator<char> &) const) &std::filesystem::__cxx11::path::string<char,std::char_traits<char>,std::allocator<char>>, "C++: std::filesystem::__cxx11::path::string(const class std::allocator<char> &) const --> std::string", pybind11::arg("__a"));
		cl.def("string", [](std::filesystem::__cxx11::path const &o) -> std::basic_string<wchar_t> { return o.string(); }, "");
		cl.def("string", (class std::basic_string<wchar_t> (std::filesystem::__cxx11::path::*)(const class std::allocator<wchar_t> &) const) &std::filesystem::__cxx11::path::string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>, "C++: std::filesystem::__cxx11::path::string(const class std::allocator<wchar_t> &) const --> class std::basic_string<wchar_t>", pybind11::arg("__a"));
		cl.def("string", [](std::filesystem::__cxx11::path const &o) -> std::basic_string<char16_t, struct std::char_traits<char16_t>, class std::allocator<char16_t> > { return o.string(); }, "");
		cl.def("string", (class std::basic_string<char16_t, struct std::char_traits<char16_t>, class std::allocator<char16_t> > (std::filesystem::__cxx11::path::*)(const class std::allocator<char16_t> &) const) &std::filesystem::__cxx11::path::string<char16_t,std::char_traits<char16_t>,std::allocator<char16_t>>, "C++: std::filesystem::__cxx11::path::string(const class std::allocator<char16_t> &) const --> class std::basic_string<char16_t, struct std::char_traits<char16_t>, class std::allocator<char16_t> >", pybind11::arg("__a"));
		cl.def("string", [](std::filesystem::__cxx11::path const &o) -> std::basic_string<char32_t, struct std::char_traits<char32_t>, class std::allocator<char32_t> > { return o.string(); }, "");
		cl.def("string", (class std::basic_string<char32_t, struct std::char_traits<char32_t>, class std::allocator<char32_t> > (std::filesystem::__cxx11::path::*)(const class std::allocator<char32_t> &) const) &std::filesystem::__cxx11::path::string<char32_t,std::char_traits<char32_t>,std::allocator<char32_t>>, "C++: std::filesystem::__cxx11::path::string(const class std::allocator<char32_t> &) const --> class std::basic_string<char32_t, struct std::char_traits<char32_t>, class std::allocator<char32_t> >", pybind11::arg("__a"));
		cl.def("generic_string", [](std::filesystem::__cxx11::path const &o) -> std::string { return o.generic_string(); }, "");
		cl.def("generic_string", (std::string (std::filesystem::__cxx11::path::*)(const class std::allocator<char> &) const) &std::filesystem::__cxx11::path::generic_string<char,std::char_traits<char>,std::allocator<char>>, "C++: std::filesystem::__cxx11::path::generic_string(const class std::allocator<char> &) const --> std::string", pybind11::arg("__a"));
		cl.def("generic_string", [](std::filesystem::__cxx11::path const &o) -> std::basic_string<wchar_t> { return o.generic_string(); }, "");
		cl.def("generic_string", (class std::basic_string<wchar_t> (std::filesystem::__cxx11::path::*)(const class std::allocator<wchar_t> &) const) &std::filesystem::__cxx11::path::generic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>, "C++: std::filesystem::__cxx11::path::generic_string(const class std::allocator<wchar_t> &) const --> class std::basic_string<wchar_t>", pybind11::arg("__a"));
		cl.def("generic_string", [](std::filesystem::__cxx11::path const &o) -> std::basic_string<char16_t, struct std::char_traits<char16_t>, class std::allocator<char16_t> > { return o.generic_string(); }, "");
		cl.def("generic_string", (class std::basic_string<char16_t, struct std::char_traits<char16_t>, class std::allocator<char16_t> > (std::filesystem::__cxx11::path::*)(const class std::allocator<char16_t> &) const) &std::filesystem::__cxx11::path::generic_string<char16_t,std::char_traits<char16_t>,std::allocator<char16_t>>, "C++: std::filesystem::__cxx11::path::generic_string(const class std::allocator<char16_t> &) const --> class std::basic_string<char16_t, struct std::char_traits<char16_t>, class std::allocator<char16_t> >", pybind11::arg("__a"));
		cl.def("generic_string", [](std::filesystem::__cxx11::path const &o) -> std::basic_string<char32_t, struct std::char_traits<char32_t>, class std::allocator<char32_t> > { return o.generic_string(); }, "");
		cl.def("generic_string", (class std::basic_string<char32_t, struct std::char_traits<char32_t>, class std::allocator<char32_t> > (std::filesystem::__cxx11::path::*)(const class std::allocator<char32_t> &) const) &std::filesystem::__cxx11::path::generic_string<char32_t,std::char_traits<char32_t>,std::allocator<char32_t>>, "C++: std::filesystem::__cxx11::path::generic_string(const class std::allocator<char32_t> &) const --> class std::basic_string<char32_t, struct std::char_traits<char32_t>, class std::allocator<char32_t> >", pybind11::arg("__a"));
		cl.def("assign", (class std::filesystem::__cxx11::path & (std::filesystem::__cxx11::path::*)(const class std::filesystem::__cxx11::path &)) &std::filesystem::__cxx11::path::operator=, "C++: std::filesystem::__cxx11::path::operator=(const class std::filesystem::__cxx11::path &) --> class std::filesystem::__cxx11::path &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		cl.def("__idiv__", (class std::filesystem::__cxx11::path & (std::filesystem::__cxx11::path::*)(const class std::filesystem::__cxx11::path &)) &std::filesystem::__cxx11::path::operator/=, "C++: std::filesystem::__cxx11::path::operator/=(const class std::filesystem::__cxx11::path &) --> class std::filesystem::__cxx11::path &", pybind11::return_value_policy::automatic, pybind11::arg("__p"));
		cl.def("__iadd__", (class std::filesystem::__cxx11::path & (std::filesystem::__cxx11::path::*)(const class std::filesystem::__cxx11::path &)) &std::filesystem::__cxx11::path::operator+=, "C++: std::filesystem::__cxx11::path::operator+=(const class std::filesystem::__cxx11::path &) --> class std::filesystem::__cxx11::path &", pybind11::return_value_policy::automatic, pybind11::arg("__x"));
		cl.def("__iadd__", (class std::filesystem::__cxx11::path & (std::filesystem::__cxx11::path::*)(const std::string &)) &std::filesystem::__cxx11::path::operator+=, "C++: std::filesystem::__cxx11::path::operator+=(const std::string &) --> class std::filesystem::__cxx11::path &", pybind11::return_value_policy::automatic, pybind11::arg("__x"));
		cl.def("__iadd__", (class std::filesystem::__cxx11::path & (std::filesystem::__cxx11::path::*)(const char *)) &std::filesystem::__cxx11::path::operator+=, "C++: std::filesystem::__cxx11::path::operator+=(const char *) --> class std::filesystem::__cxx11::path &", pybind11::return_value_policy::automatic, pybind11::arg("__x"));
		cl.def("__iadd__", (class std::filesystem::__cxx11::path & (std::filesystem::__cxx11::path::*)(char)) &std::filesystem::__cxx11::path::operator+=, "C++: std::filesystem::__cxx11::path::operator+=(char) --> class std::filesystem::__cxx11::path &", pybind11::return_value_policy::automatic, pybind11::arg("__x"));
		cl.def("__iadd__", (class std::filesystem::__cxx11::path & (std::filesystem::__cxx11::path::*)(class std::basic_string_view<char, struct std::char_traits<char> >)) &std::filesystem::__cxx11::path::operator+=, "C++: std::filesystem::__cxx11::path::operator+=(class std::basic_string_view<char, struct std::char_traits<char> >) --> class std::filesystem::__cxx11::path &", pybind11::return_value_policy::automatic, pybind11::arg("__x"));
		cl.def("clear", (void (std::filesystem::__cxx11::path::*)()) &std::filesystem::__cxx11::path::clear, "C++: std::filesystem::__cxx11::path::clear() --> void");
		cl.def("make_preferred", (class std::filesystem::__cxx11::path & (std::filesystem::__cxx11::path::*)()) &std::filesystem::__cxx11::path::make_preferred, "C++: std::filesystem::__cxx11::path::make_preferred() --> class std::filesystem::__cxx11::path &", pybind11::return_value_policy::automatic);
		cl.def("remove_filename", (class std::filesystem::__cxx11::path & (std::filesystem::__cxx11::path::*)()) &std::filesystem::__cxx11::path::remove_filename, "C++: std::filesystem::__cxx11::path::remove_filename() --> class std::filesystem::__cxx11::path &", pybind11::return_value_policy::automatic);
		cl.def("replace_filename", (class std::filesystem::__cxx11::path & (std::filesystem::__cxx11::path::*)(const class std::filesystem::__cxx11::path &)) &std::filesystem::__cxx11::path::replace_filename, "C++: std::filesystem::__cxx11::path::replace_filename(const class std::filesystem::__cxx11::path &) --> class std::filesystem::__cxx11::path &", pybind11::return_value_policy::automatic, pybind11::arg("__replacement"));
		cl.def("replace_extension", [](std::filesystem::__cxx11::path &o) -> std::filesystem::__cxx11::path & { return o.replace_extension(); }, "", pybind11::return_value_policy::automatic);
		cl.def("replace_extension", (class std::filesystem::__cxx11::path & (std::filesystem::__cxx11::path::*)(const class std::filesystem::__cxx11::path &)) &std::filesystem::__cxx11::path::replace_extension, "C++: std::filesystem::__cxx11::path::replace_extension(const class std::filesystem::__cxx11::path &) --> class std::filesystem::__cxx11::path &", pybind11::return_value_policy::automatic, pybind11::arg("__replacement"));
		cl.def("swap", (void (std::filesystem::__cxx11::path::*)(class std::filesystem::__cxx11::path &)) &std::filesystem::__cxx11::path::swap, "C++: std::filesystem::__cxx11::path::swap(class std::filesystem::__cxx11::path &) --> void", pybind11::arg("__rhs"));
		cl.def("native", (const std::string & (std::filesystem::__cxx11::path::*)() const) &std::filesystem::__cxx11::path::native, "C++: std::filesystem::__cxx11::path::native() const --> const std::string &", pybind11::return_value_policy::automatic);
		cl.def("c_str", (const char * (std::filesystem::__cxx11::path::*)() const) &std::filesystem::__cxx11::path::c_str, "C++: std::filesystem::__cxx11::path::c_str() const --> const char *", pybind11::return_value_policy::automatic);
		cl.def("string", (std::string (std::filesystem::__cxx11::path::*)() const) &std::filesystem::__cxx11::path::string, "C++: std::filesystem::__cxx11::path::string() const --> std::string");
		cl.def("wstring", (class std::basic_string<wchar_t> (std::filesystem::__cxx11::path::*)() const) &std::filesystem::__cxx11::path::wstring, "C++: std::filesystem::__cxx11::path::wstring() const --> class std::basic_string<wchar_t>");
		cl.def("u8string", (std::string (std::filesystem::__cxx11::path::*)() const) &std::filesystem::__cxx11::path::u8string, "C++: std::filesystem::__cxx11::path::u8string() const --> std::string");
		cl.def("u16string", (class std::basic_string<char16_t, struct std::char_traits<char16_t>, class std::allocator<char16_t> > (std::filesystem::__cxx11::path::*)() const) &std::filesystem::__cxx11::path::u16string, "C++: std::filesystem::__cxx11::path::u16string() const --> class std::basic_string<char16_t, struct std::char_traits<char16_t>, class std::allocator<char16_t> >");
		cl.def("u32string", (class std::basic_string<char32_t, struct std::char_traits<char32_t>, class std::allocator<char32_t> > (std::filesystem::__cxx11::path::*)() const) &std::filesystem::__cxx11::path::u32string, "C++: std::filesystem::__cxx11::path::u32string() const --> class std::basic_string<char32_t, struct std::char_traits<char32_t>, class std::allocator<char32_t> >");
		cl.def("generic_string", (std::string (std::filesystem::__cxx11::path::*)() const) &std::filesystem::__cxx11::path::generic_string, "C++: std::filesystem::__cxx11::path::generic_string() const --> std::string");
		cl.def("generic_wstring", (class std::basic_string<wchar_t> (std::filesystem::__cxx11::path::*)() const) &std::filesystem::__cxx11::path::generic_wstring, "C++: std::filesystem::__cxx11::path::generic_wstring() const --> class std::basic_string<wchar_t>");
		cl.def("generic_u8string", (std::string (std::filesystem::__cxx11::path::*)() const) &std::filesystem::__cxx11::path::generic_u8string, "C++: std::filesystem::__cxx11::path::generic_u8string() const --> std::string");
		cl.def("generic_u16string", (class std::basic_string<char16_t, struct std::char_traits<char16_t>, class std::allocator<char16_t> > (std::filesystem::__cxx11::path::*)() const) &std::filesystem::__cxx11::path::generic_u16string, "C++: std::filesystem::__cxx11::path::generic_u16string() const --> class std::basic_string<char16_t, struct std::char_traits<char16_t>, class std::allocator<char16_t> >");
		cl.def("generic_u32string", (class std::basic_string<char32_t, struct std::char_traits<char32_t>, class std::allocator<char32_t> > (std::filesystem::__cxx11::path::*)() const) &std::filesystem::__cxx11::path::generic_u32string, "C++: std::filesystem::__cxx11::path::generic_u32string() const --> class std::basic_string<char32_t, struct std::char_traits<char32_t>, class std::allocator<char32_t> >");
		cl.def("compare", (int (std::filesystem::__cxx11::path::*)(const class std::filesystem::__cxx11::path &) const) &std::filesystem::__cxx11::path::compare, "C++: std::filesystem::__cxx11::path::compare(const class std::filesystem::__cxx11::path &) const --> int", pybind11::arg("__p"));
		cl.def("compare", (int (std::filesystem::__cxx11::path::*)(const std::string &) const) &std::filesystem::__cxx11::path::compare, "C++: std::filesystem::__cxx11::path::compare(const std::string &) const --> int", pybind11::arg("__s"));
		cl.def("compare", (int (std::filesystem::__cxx11::path::*)(const char *) const) &std::filesystem::__cxx11::path::compare, "C++: std::filesystem::__cxx11::path::compare(const char *) const --> int", pybind11::arg("__s"));
		cl.def("compare", (int (std::filesystem::__cxx11::path::*)(class std::basic_string_view<char, struct std::char_traits<char> >) const) &std::filesystem::__cxx11::path::compare, "C++: std::filesystem::__cxx11::path::compare(class std::basic_string_view<char, struct std::char_traits<char> >) const --> int", pybind11::arg("__s"));
		cl.def("root_name", (class std::filesystem::__cxx11::path (std::filesystem::__cxx11::path::*)() const) &std::filesystem::__cxx11::path::root_name, "C++: std::filesystem::__cxx11::path::root_name() const --> class std::filesystem::__cxx11::path");
		cl.def("root_directory", (class std::filesystem::__cxx11::path (std::filesystem::__cxx11::path::*)() const) &std::filesystem::__cxx11::path::root_directory, "C++: std::filesystem::__cxx11::path::root_directory() const --> class std::filesystem::__cxx11::path");
		cl.def("root_path", (class std::filesystem::__cxx11::path (std::filesystem::__cxx11::path::*)() const) &std::filesystem::__cxx11::path::root_path, "C++: std::filesystem::__cxx11::path::root_path() const --> class std::filesystem::__cxx11::path");
		cl.def("relative_path", (class std::filesystem::__cxx11::path (std::filesystem::__cxx11::path::*)() const) &std::filesystem::__cxx11::path::relative_path, "C++: std::filesystem::__cxx11::path::relative_path() const --> class std::filesystem::__cxx11::path");
		cl.def("parent_path", (class std::filesystem::__cxx11::path (std::filesystem::__cxx11::path::*)() const) &std::filesystem::__cxx11::path::parent_path, "C++: std::filesystem::__cxx11::path::parent_path() const --> class std::filesystem::__cxx11::path");
		cl.def("filename", (class std::filesystem::__cxx11::path (std::filesystem::__cxx11::path::*)() const) &std::filesystem::__cxx11::path::filename, "C++: std::filesystem::__cxx11::path::filename() const --> class std::filesystem::__cxx11::path");
		cl.def("stem", (class std::filesystem::__cxx11::path (std::filesystem::__cxx11::path::*)() const) &std::filesystem::__cxx11::path::stem, "C++: std::filesystem::__cxx11::path::stem() const --> class std::filesystem::__cxx11::path");
		cl.def("extension", (class std::filesystem::__cxx11::path (std::filesystem::__cxx11::path::*)() const) &std::filesystem::__cxx11::path::extension, "C++: std::filesystem::__cxx11::path::extension() const --> class std::filesystem::__cxx11::path");
		cl.def("empty", (bool (std::filesystem::__cxx11::path::*)() const) &std::filesystem::__cxx11::path::empty, "C++: std::filesystem::__cxx11::path::empty() const --> bool");
		cl.def("has_root_name", (bool (std::filesystem::__cxx11::path::*)() const) &std::filesystem::__cxx11::path::has_root_name, "C++: std::filesystem::__cxx11::path::has_root_name() const --> bool");
		cl.def("has_root_directory", (bool (std::filesystem::__cxx11::path::*)() const) &std::filesystem::__cxx11::path::has_root_directory, "C++: std::filesystem::__cxx11::path::has_root_directory() const --> bool");
		cl.def("has_root_path", (bool (std::filesystem::__cxx11::path::*)() const) &std::filesystem::__cxx11::path::has_root_path, "C++: std::filesystem::__cxx11::path::has_root_path() const --> bool");
		cl.def("has_relative_path", (bool (std::filesystem::__cxx11::path::*)() const) &std::filesystem::__cxx11::path::has_relative_path, "C++: std::filesystem::__cxx11::path::has_relative_path() const --> bool");
		cl.def("has_parent_path", (bool (std::filesystem::__cxx11::path::*)() const) &std::filesystem::__cxx11::path::has_parent_path, "C++: std::filesystem::__cxx11::path::has_parent_path() const --> bool");
		cl.def("has_filename", (bool (std::filesystem::__cxx11::path::*)() const) &std::filesystem::__cxx11::path::has_filename, "C++: std::filesystem::__cxx11::path::has_filename() const --> bool");
		cl.def("has_stem", (bool (std::filesystem::__cxx11::path::*)() const) &std::filesystem::__cxx11::path::has_stem, "C++: std::filesystem::__cxx11::path::has_stem() const --> bool");
		cl.def("has_extension", (bool (std::filesystem::__cxx11::path::*)() const) &std::filesystem::__cxx11::path::has_extension, "C++: std::filesystem::__cxx11::path::has_extension() const --> bool");
		cl.def("is_absolute", (bool (std::filesystem::__cxx11::path::*)() const) &std::filesystem::__cxx11::path::is_absolute, "C++: std::filesystem::__cxx11::path::is_absolute() const --> bool");
		cl.def("is_relative", (bool (std::filesystem::__cxx11::path::*)() const) &std::filesystem::__cxx11::path::is_relative, "C++: std::filesystem::__cxx11::path::is_relative() const --> bool");
		cl.def("lexically_normal", (class std::filesystem::__cxx11::path (std::filesystem::__cxx11::path::*)() const) &std::filesystem::__cxx11::path::lexically_normal, "C++: std::filesystem::__cxx11::path::lexically_normal() const --> class std::filesystem::__cxx11::path");
		cl.def("lexically_relative", (class std::filesystem::__cxx11::path (std::filesystem::__cxx11::path::*)(const class std::filesystem::__cxx11::path &) const) &std::filesystem::__cxx11::path::lexically_relative, "C++: std::filesystem::__cxx11::path::lexically_relative(const class std::filesystem::__cxx11::path &) const --> class std::filesystem::__cxx11::path", pybind11::arg("base"));
		cl.def("lexically_proximate", (class std::filesystem::__cxx11::path (std::filesystem::__cxx11::path::*)(const class std::filesystem::__cxx11::path &) const) &std::filesystem::__cxx11::path::lexically_proximate, "C++: std::filesystem::__cxx11::path::lexically_proximate(const class std::filesystem::__cxx11::path &) const --> class std::filesystem::__cxx11::path", pybind11::arg("base"));
		cl.def("begin", (class std::filesystem::__cxx11::path::iterator (std::filesystem::__cxx11::path::*)() const) &std::filesystem::__cxx11::path::begin, "C++: std::filesystem::__cxx11::path::begin() const --> class std::filesystem::__cxx11::path::iterator");
		cl.def("end", (class std::filesystem::__cxx11::path::iterator (std::filesystem::__cxx11::path::*)() const) &std::filesystem::__cxx11::path::end, "C++: std::filesystem::__cxx11::path::end() const --> class std::filesystem::__cxx11::path::iterator");

		{ // std::filesystem::__cxx11::path::iterator file:bits/fs_path.h line:803
			auto & enclosing_class = cl;
			pybind11::class_<std::filesystem::__cxx11::path::iterator, std::shared_ptr<std::filesystem::__cxx11::path::iterator>> cl(enclosing_class, "iterator", "");
			cl.def( pybind11::init( [](){ return new std::filesystem::__cxx11::path::iterator(); } ) );
			cl.def( pybind11::init( [](std::filesystem::__cxx11::path::iterator const &o){ return new std::filesystem::__cxx11::path::iterator(o); } ) );
			cl.def("assign", (class std::filesystem::__cxx11::path::iterator & (std::filesystem::__cxx11::path::iterator::*)(const class std::filesystem::__cxx11::path::iterator &)) &std::filesystem::__cxx11::path::iterator::operator=, "C++: std::filesystem::__cxx11::path::iterator::operator=(const class std::filesystem::__cxx11::path::iterator &) --> class std::filesystem::__cxx11::path::iterator &", pybind11::return_value_policy::automatic, pybind11::arg(""));
			cl.def("__mul__", (const class std::filesystem::__cxx11::path & (std::filesystem::__cxx11::path::iterator::*)() const) &std::filesystem::__cxx11::path::iterator::operator*, "C++: std::filesystem::__cxx11::path::iterator::operator*() const --> const class std::filesystem::__cxx11::path &", pybind11::return_value_policy::automatic);
			cl.def("arrow", (const class std::filesystem::__cxx11::path * (std::filesystem::__cxx11::path::iterator::*)() const) &std::filesystem::__cxx11::path::iterator::operator->, "C++: std::filesystem::__cxx11::path::iterator::operator->() const --> const class std::filesystem::__cxx11::path *", pybind11::return_value_policy::automatic);
			cl.def("plus_plus", (class std::filesystem::__cxx11::path::iterator & (std::filesystem::__cxx11::path::iterator::*)()) &std::filesystem::__cxx11::path::iterator::operator++, "C++: std::filesystem::__cxx11::path::iterator::operator++() --> class std::filesystem::__cxx11::path::iterator &", pybind11::return_value_policy::automatic);
			cl.def("plus_plus", (class std::filesystem::__cxx11::path::iterator (std::filesystem::__cxx11::path::iterator::*)(int)) &std::filesystem::__cxx11::path::iterator::operator++, "C++: std::filesystem::__cxx11::path::iterator::operator++(int) --> class std::filesystem::__cxx11::path::iterator", pybind11::arg(""));
			cl.def("minus_minus", (class std::filesystem::__cxx11::path::iterator & (std::filesystem::__cxx11::path::iterator::*)()) &std::filesystem::__cxx11::path::iterator::operator--, "C++: std::filesystem::__cxx11::path::iterator::operator--() --> class std::filesystem::__cxx11::path::iterator &", pybind11::return_value_policy::automatic);
			cl.def("minus_minus", (class std::filesystem::__cxx11::path::iterator (std::filesystem::__cxx11::path::iterator::*)(int)) &std::filesystem::__cxx11::path::iterator::operator--, "C++: std::filesystem::__cxx11::path::iterator::operator--(int) --> class std::filesystem::__cxx11::path::iterator", pybind11::arg(""));
		}

	}
}


// File: unknown/unknown_3.cpp
#include <linux/futex.h>
#include <sstream> // __str__

#include <functional>
#include <pybind11/pybind11.h>
#include <string>

#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

void bind_unknown_unknown_3(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// ghost_type file: line:57
	pybind11::enum_<ghost_type>(M(""), "ghost_type", pybind11::arithmetic(), "")
		.value("GHOST_AGENT", GHOST_AGENT)
		.value("GHOST_TASK", GHOST_TASK)
		.export_values();

;

	{ // ghost_sw_info file: line:93
		pybind11::class_<ghost_sw_info, std::shared_ptr<ghost_sw_info>> cl(M(""), "ghost_sw_info", "");
		cl.def( pybind11::init( [](){ return new ghost_sw_info(); } ) );
		cl.def( pybind11::init( [](ghost_sw_info const &o){ return new ghost_sw_info(o); } ) );
		cl.def_readwrite("id", &ghost_sw_info::id);
		cl.def_readwrite("index", &ghost_sw_info::index);
		cl.def("assign", (struct ghost_sw_info & (ghost_sw_info::*)(const struct ghost_sw_info &)) &ghost_sw_info::operator=, "C++: ghost_sw_info::operator=(const struct ghost_sw_info &) --> struct ghost_sw_info &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // ghost_status_word file: line:195
		pybind11::class_<ghost_status_word, std::shared_ptr<ghost_status_word>> cl(M(""), "ghost_status_word", "");
		cl.def( pybind11::init( [](){ return new ghost_status_word(); } ) );
		cl.def_readwrite("barrier", &ghost_status_word::barrier);
		cl.def_readwrite("flags", &ghost_status_word::flags);
		cl.def_readwrite("gtid", &ghost_status_word::gtid);
		cl.def_readwrite("switch_time", &ghost_status_word::switch_time);
		cl.def_readwrite("runtime", &ghost_status_word::runtime);
	}
	{ // ghost_msg file: line:228
		pybind11::class_<ghost_msg, std::shared_ptr<ghost_msg>> cl(M(""), "ghost_msg", "");
		cl.def( pybind11::init( [](){ return new ghost_msg(); } ) );
		cl.def( pybind11::init( [](ghost_msg const &o){ return new ghost_msg(o); } ) );
		cl.def_readwrite("type", &ghost_msg::type);
		cl.def_readwrite("length", &ghost_msg::length);
		cl.def_readwrite("seqnum", &ghost_msg::seqnum);
		cl.def("assign", (struct ghost_msg & (ghost_msg::*)(const struct ghost_msg &)) &ghost_msg::operator=, "C++: ghost_msg::operator=(const struct ghost_msg &) --> struct ghost_msg &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	// ghost_txn_state file: line:497
	pybind11::enum_<ghost_txn_state>(M(""), "ghost_txn_state", pybind11::arithmetic(), "")
		.value("GHOST_TXN_COMPLETE", GHOST_TXN_COMPLETE)
		.value("GHOST_TXN_ABORTED", GHOST_TXN_ABORTED)
		.value("GHOST_TXN_TARGET_ONCPU", GHOST_TXN_TARGET_ONCPU)
		.value("GHOST_TXN_TARGET_STALE", GHOST_TXN_TARGET_STALE)
		.value("GHOST_TXN_TARGET_NOT_FOUND", GHOST_TXN_TARGET_NOT_FOUND)
		.value("GHOST_TXN_TARGET_NOT_RUNNABLE", GHOST_TXN_TARGET_NOT_RUNNABLE)
		.value("GHOST_TXN_AGENT_STALE", GHOST_TXN_AGENT_STALE)
		.value("GHOST_TXN_CPU_OFFLINE", GHOST_TXN_CPU_OFFLINE)
		.value("GHOST_TXN_CPU_UNAVAIL", GHOST_TXN_CPU_UNAVAIL)
		.value("GHOST_TXN_INVALID_FLAGS", GHOST_TXN_INVALID_FLAGS)
		.value("GHOST_TXN_INVALID_TARGET", GHOST_TXN_INVALID_TARGET)
		.value("GHOST_TXN_NOT_PERMITTED", GHOST_TXN_NOT_PERMITTED)
		.value("GHOST_TXN_INVALID_CPU", GHOST_TXN_INVALID_CPU)
		.value("GHOST_TXN_NO_AGENT", GHOST_TXN_NO_AGENT)
		.value("GHOST_TXN_UNSUPPORTED_VERSION", GHOST_TXN_UNSUPPORTED_VERSION)
		.value("GHOST_TXN_POISONED", GHOST_TXN_POISONED)
		.value("GHOST_TXN_READY", GHOST_TXN_READY)
		.export_values();

;

	{ // ghost_txn file: line:542
		pybind11::class_<ghost_txn, std::shared_ptr<ghost_txn>> cl(M(""), "ghost_txn", "");
		cl.def( pybind11::init( [](){ return new ghost_txn(); } ) );
		cl.def_readwrite("version", &ghost_txn::version);
		cl.def_readwrite("cpu", &ghost_txn::cpu);
		cl.def_readwrite("state", &ghost_txn::state);
		cl.def_readwrite("agent_barrier", &ghost_txn::agent_barrier);
		cl.def_readwrite("task_barrier", &ghost_txn::task_barrier);
		cl.def_readwrite("run_flags", &ghost_txn::run_flags);
		cl.def_readwrite("commit_flags", &ghost_txn::commit_flags);
		cl.def_readwrite("unused", &ghost_txn::unused);
		cl.def_readwrite("gtid", &ghost_txn::gtid);
		cl.def_readwrite("commit_time", &ghost_txn::commit_time);
		cl.def_readwrite("cpu_seqnum", &ghost_txn::cpu_seqnum);
	}
}


// File: unknown/unknown_4.cpp
#include <cstdio>
#include <functional>
#include <ios>
#include <iterator>
#include <locale>
#include <memory>
#include <ostream>
#include <sstream> // __str__
#include <streambuf>
#include <string>
#include <string_view>
#include <vector>

#include <functional>
#include <pybind11/pybind11.h>
#include <string>

#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

void bind_unknown_unknown_4(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// ghost::GetTID() file: line:45
	M("ghost").def("GetTID", (int (*)()) &ghost::GetTID, "C++: ghost::GetTID() --> int");

	// ghost::Exit(int) file: line:46
	M("ghost").def("Exit", (void (*)(int)) &ghost::Exit, "C++: ghost::Exit(int) --> void", pybind11::arg("code"));

	// ghost::GetFileSize(int) file: line:47
	M("ghost").def("GetFileSize", (unsigned long (*)(int)) &ghost::GetFileSize, "C++: ghost::GetFileSize(int) --> unsigned long", pybind11::arg("fd"));

	// ghost::PrintBacktrace(struct _IO_FILE *, void *) file: line:48
	M("ghost").def("PrintBacktrace", [](struct _IO_FILE * a0) -> void { return ghost::PrintBacktrace(a0); }, "", pybind11::arg("f"));
	M("ghost").def("PrintBacktrace", (void (*)(struct _IO_FILE *, void *)) &ghost::PrintBacktrace, "C++: ghost::PrintBacktrace(struct _IO_FILE *, void *) --> void", pybind11::arg("f"), pybind11::arg("uctx"));

	// ghost::READ_ONCE(const long &) file: line:82
	M("ghost").def("READ_ONCE", (long (*)(const long &)) &ghost::READ_ONCE<long>, "C++: ghost::READ_ONCE(const long &) --> long", pybind11::arg("x"));

	// ghost::READ_ONCE(const unsigned int &) file: line:82
	M("ghost").def("READ_ONCE", (unsigned int (*)(const unsigned int &)) &ghost::READ_ONCE<unsigned int>, "C++: ghost::READ_ONCE(const unsigned int &) --> unsigned int", pybind11::arg("x"));

	// ghost::READ_ONCE(const unsigned long &) file: line:82
	M("ghost").def("READ_ONCE", (unsigned long (*)(const unsigned long &)) &ghost::READ_ONCE<unsigned long>, "C++: ghost::READ_ONCE(const unsigned long &) --> unsigned long", pybind11::arg("x"));

	// ghost::MonotonicNow() file: line:106
	M("ghost").def("MonotonicNow", (class absl::Time (*)()) &ghost::MonotonicNow, "C++: ghost::MonotonicNow() --> class absl::Time");

	// ghost::GetGtid() file: line:129
	M("ghost").def("GetGtid", (long (*)()) &ghost::GetGtid, "C++: ghost::GetGtid() --> long");

	// ghost::Pause() file: line:134
	M("ghost").def("Pause", (void (*)()) &ghost::Pause, "C++: ghost::Pause() --> void");

	{ // ghost::Gtid file: line:159
		pybind11::class_<ghost::Gtid, std::shared_ptr<ghost::Gtid>> cl(M("ghost"), "Gtid", "");
		cl.def( pybind11::init( [](){ return new ghost::Gtid(); } ) );
		cl.def( pybind11::init<long>(), pybind11::arg("gtid") );

		cl.def( pybind11::init( [](ghost::Gtid const &o){ return new ghost::Gtid(o); } ) );
		cl.def_static("Current", (class ghost::Gtid (*)()) &ghost::Gtid::Current, "C++: ghost::Gtid::Current() --> class ghost::Gtid");
		cl.def("id", (long (ghost::Gtid::*)() const) &ghost::Gtid::id, "C++: ghost::Gtid::id() const --> long");
		cl.def("tid", (int (ghost::Gtid::*)() const) &ghost::Gtid::tid, "C++: ghost::Gtid::tid() const --> int");
		cl.def("tgid", (int (ghost::Gtid::*)() const) &ghost::Gtid::tgid, "C++: ghost::Gtid::tgid() const --> int");
		cl.def("__eq__", (bool (ghost::Gtid::*)(const class ghost::Gtid &) const) &ghost::Gtid::operator==, "C++: ghost::Gtid::operator==(const class ghost::Gtid &) const --> bool", pybind11::arg("b"));
		cl.def("__ne__", (bool (ghost::Gtid::*)(const class ghost::Gtid &) const) &ghost::Gtid::operator!=, "C++: ghost::Gtid::operator!=(const class ghost::Gtid &) const --> bool", pybind11::arg("b"));
		cl.def("assign_name", (void (ghost::Gtid::*)(std::string) const) &ghost::Gtid::assign_name, "C++: ghost::Gtid::assign_name(std::string) const --> void", pybind11::arg("name"));
		cl.def("describe", (class std::basic_string_view<char, struct std::char_traits<char> > (ghost::Gtid::*)() const) &ghost::Gtid::describe, "C++: ghost::Gtid::describe() const --> class std::basic_string_view<char, struct std::char_traits<char> >");
		cl.def("assign", (class ghost::Gtid & (ghost::Gtid::*)(const class ghost::Gtid &)) &ghost::Gtid::operator=, "C++: ghost::Gtid::operator=(const class ghost::Gtid &) --> class ghost::Gtid &", pybind11::return_value_policy::automatic, pybind11::arg(""));

		cl.def("__str__", [](ghost::Gtid const &o) -> std::string { std::ostringstream s; s << o; return s.str(); } );
	}
	{ // ghost::Futex file: line:232
		pybind11::class_<ghost::Futex, std::shared_ptr<ghost::Futex>> cl(M("ghost"), "Futex", "");
		cl.def( pybind11::init( [](){ return new ghost::Futex(); } ) );
	}
	{ // ghost::Notification file: line:296
		pybind11::class_<ghost::Notification, std::shared_ptr<ghost::Notification>> cl(M("ghost"), "Notification", "");
		cl.def( pybind11::init( [](){ return new ghost::Notification(); } ) );
		cl.def("HasBeenNotified", (bool (ghost::Notification::*)() const) &ghost::Notification::HasBeenNotified, "C++: ghost::Notification::HasBeenNotified() const --> bool");
		cl.def("Reset", (void (ghost::Notification::*)()) &ghost::Notification::Reset, "C++: ghost::Notification::Reset() --> void");
		cl.def("Notify", (void (ghost::Notification::*)()) &ghost::Notification::Notify, "C++: ghost::Notification::Notify() --> void");
		cl.def("WaitForNotification", (void (ghost::Notification::*)()) &ghost::Notification::WaitForNotification, "C++: ghost::Notification::WaitForNotification() --> void");
	}
	{ // ghost::ForkedProcess file: line:366
		pybind11::class_<ghost::ForkedProcess, std::shared_ptr<ghost::ForkedProcess>> cl(M("ghost"), "ForkedProcess", "");
		cl.def( pybind11::init( [](){ return new ghost::ForkedProcess(); } ), "doc" );
		cl.def( pybind11::init<int>(), pybind11::arg("stderr_fd") );

		cl.def( pybind11::init<class std::function<int (void)>>(), pybind11::arg("lambda") );

		cl.def("WaitForChildExit", (int (ghost::ForkedProcess::*)()) &ghost::ForkedProcess::WaitForChildExit, "C++: ghost::ForkedProcess::WaitForChildExit() --> int");
		cl.def("IsChild", (bool (ghost::ForkedProcess::*)()) &ghost::ForkedProcess::IsChild, "C++: ghost::ForkedProcess::IsChild() --> bool");
		cl.def("AddExitHandler", (void (ghost::ForkedProcess::*)(class std::function<bool (int, int)>)) &ghost::ForkedProcess::AddExitHandler, "C++: ghost::ForkedProcess::AddExitHandler(class std::function<bool (int, int)>) --> void", pybind11::arg("handler"));
		cl.def("KillChild", (void (ghost::ForkedProcess::*)(int)) &ghost::ForkedProcess::KillChild, "C++: ghost::ForkedProcess::KillChild(int) --> void", pybind11::arg("signum"));
	}
	{ // ghost::Cpu file: line:54
		pybind11::class_<ghost::Cpu, std::shared_ptr<ghost::Cpu>> cl(M("ghost"), "Cpu", "");
		cl.def( pybind11::init<enum ghost::Cpu::UninitializedType>(), pybind11::arg("") );

		cl.def( pybind11::init( [](ghost::Cpu const &o){ return new ghost::Cpu(o); } ) );

		pybind11::enum_<ghost::Cpu::UninitializedType>(cl, "UninitializedType", "")
			.value("kUninitialized", ghost::Cpu::UninitializedType::kUninitialized);

		cl.def("id", (int (ghost::Cpu::*)() const) &ghost::Cpu::id, "C++: ghost::Cpu::id() const --> int");
		cl.def("core", (int (ghost::Cpu::*)() const) &ghost::Cpu::core, "C++: ghost::Cpu::core() const --> int");
		cl.def("smt_idx", (int (ghost::Cpu::*)() const) &ghost::Cpu::smt_idx, "C++: ghost::Cpu::smt_idx() const --> int");
		cl.def("valid", (bool (ghost::Cpu::*)() const) &ghost::Cpu::valid, "C++: ghost::Cpu::valid() const --> bool");
		cl.def("siblings", (const class ghost::CpuList & (ghost::Cpu::*)() const) &ghost::Cpu::siblings, "C++: ghost::Cpu::siblings() const --> const class ghost::CpuList &", pybind11::return_value_policy::automatic);
		cl.def("l3_siblings", (const class ghost::CpuList & (ghost::Cpu::*)() const) &ghost::Cpu::l3_siblings, "C++: ghost::Cpu::l3_siblings() const --> const class ghost::CpuList &", pybind11::return_value_policy::automatic);
		cl.def("numa_node", (int (ghost::Cpu::*)() const) &ghost::Cpu::numa_node, "C++: ghost::Cpu::numa_node() const --> int");
		cl.def("__eq__", (bool (ghost::Cpu::*)(const class ghost::Cpu &) const) &ghost::Cpu::operator==, "C++: ghost::Cpu::operator==(const class ghost::Cpu &) const --> bool", pybind11::arg("other"));
		cl.def("__ne__", (bool (ghost::Cpu::*)(const class ghost::Cpu &) const) &ghost::Cpu::operator!=, "C++: ghost::Cpu::operator!=(const class ghost::Cpu &) const --> bool", pybind11::arg("other"));
		cl.def("assign", (class ghost::Cpu & (ghost::Cpu::*)(const class ghost::Cpu &)) &ghost::Cpu::operator=, "C++: ghost::Cpu::operator=(const class ghost::Cpu &) --> class ghost::Cpu &", pybind11::return_value_policy::automatic, pybind11::arg(""));

		cl.def("__str__", [](ghost::Cpu const &o) -> std::string { std::ostringstream s; s << o; return s.str(); } );

		{ // ghost::Cpu::Raw file: line:56
			auto & enclosing_class = cl;
			pybind11::class_<ghost::Cpu::Raw, std::shared_ptr<ghost::Cpu::Raw>> cl(enclosing_class, "Raw", "");
			cl.def( pybind11::init( [](){ return new ghost::Cpu::Raw(); } ) );
			cl.def( pybind11::init( [](ghost::Cpu::Raw const &o){ return new ghost::Cpu::Raw(o); } ) );
			cl.def_readwrite("cpu", &ghost::Cpu::Raw::cpu);
			cl.def_readwrite("core", &ghost::Cpu::Raw::core);
			cl.def_readwrite("smt_idx", &ghost::Cpu::Raw::smt_idx);
			cl.def_readwrite("siblings", &ghost::Cpu::Raw::siblings);
			cl.def_readwrite("l3_siblings", &ghost::Cpu::Raw::l3_siblings);
			cl.def_readwrite("numa_node", &ghost::Cpu::Raw::numa_node);
			cl.def("__eq__", (bool (ghost::Cpu::Raw::*)(const struct ghost::Cpu::Raw &) const) &ghost::Cpu::Raw::operator==, "C++: ghost::Cpu::Raw::operator==(const struct ghost::Cpu::Raw &) const --> bool", pybind11::arg("other"));
			cl.def("__ne__", (bool (ghost::Cpu::Raw::*)(const struct ghost::Cpu::Raw &) const) &ghost::Cpu::Raw::operator!=, "C++: ghost::Cpu::Raw::operator!=(const struct ghost::Cpu::Raw &) const --> bool", pybind11::arg("other"));
		}

	}
	{ // ghost::CpuList file: line:133
		pybind11::class_<ghost::CpuList, std::shared_ptr<ghost::CpuList>> cl(M("ghost"), "CpuList", "");
		cl.def( pybind11::init<const class ghost::Topology &>(), pybind11::arg("topology") );

		cl.def( pybind11::init( [](ghost::CpuList const &o){ return new ghost::CpuList(o); } ) );
		cl.def("__eq__", (bool (ghost::CpuList::*)(const class ghost::CpuList &) const) &ghost::CpuList::operator==, "C++: ghost::CpuList::operator==(const class ghost::CpuList &) const --> bool", pybind11::arg("other"));
		cl.def("__iadd__", (class ghost::CpuList & (ghost::CpuList::*)(const class ghost::CpuList &)) &ghost::CpuList::operator+=, "C++: ghost::CpuList::operator+=(const class ghost::CpuList &) --> class ghost::CpuList &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
		cl.def("__isub__", (class ghost::CpuList & (ghost::CpuList::*)(const class ghost::CpuList &)) &ghost::CpuList::operator-=, "C++: ghost::CpuList::operator-=(const class ghost::CpuList &) --> class ghost::CpuList &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
		cl.def("ToVector", (class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> > (ghost::CpuList::*)() const) &ghost::CpuList::ToVector, "C++: ghost::CpuList::ToVector() const --> class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> >");
		cl.def("ToIntVector", (class std::vector<int, class std::allocator<int> > (ghost::CpuList::*)() const) &ghost::CpuList::ToIntVector, "C++: ghost::CpuList::ToIntVector() const --> class std::vector<int, class std::allocator<int> >");
		cl.def("Intersection", (void (ghost::CpuList::*)(const class ghost::CpuList &)) &ghost::CpuList::Intersection, "C++: ghost::CpuList::Intersection(const class ghost::CpuList &) --> void", pybind11::arg("src"));
		cl.def("Union", (void (ghost::CpuList::*)(const class ghost::CpuList &)) &ghost::CpuList::Union, "C++: ghost::CpuList::Union(const class ghost::CpuList &) --> void", pybind11::arg("src"));
		cl.def("Subtract", (void (ghost::CpuList::*)(const class ghost::CpuList &)) &ghost::CpuList::Subtract, "C++: ghost::CpuList::Subtract(const class ghost::CpuList &) --> void", pybind11::arg("src"));
		cl.def("Set", (void (ghost::CpuList::*)(unsigned int)) &ghost::CpuList::Set, "C++: ghost::CpuList::Set(unsigned int) --> void", pybind11::arg("id"));
		cl.def("Set", (void (ghost::CpuList::*)(const class ghost::Cpu &)) &ghost::CpuList::Set, "C++: ghost::CpuList::Set(const class ghost::Cpu &) --> void", pybind11::arg("cpu"));
		cl.def("Clear", (void (ghost::CpuList::*)(unsigned int)) &ghost::CpuList::Clear, "C++: ghost::CpuList::Clear(unsigned int) --> void", pybind11::arg("id"));
		cl.def("Clear", (void (ghost::CpuList::*)(const class ghost::Cpu &)) &ghost::CpuList::Clear, "C++: ghost::CpuList::Clear(const class ghost::Cpu &) --> void", pybind11::arg("cpu"));
		cl.def("IsSet", (bool (ghost::CpuList::*)(unsigned int) const) &ghost::CpuList::IsSet, "C++: ghost::CpuList::IsSet(unsigned int) const --> bool", pybind11::arg("id"));
		cl.def("IsSet", (bool (ghost::CpuList::*)(const class ghost::Cpu &) const) &ghost::CpuList::IsSet, "C++: ghost::CpuList::IsSet(const class ghost::Cpu &) const --> bool", pybind11::arg("cpu"));
		cl.def("GetNthCpu", (class ghost::Cpu (ghost::CpuList::*)(unsigned int) const) &ghost::CpuList::GetNthCpu, "C++: ghost::CpuList::GetNthCpu(unsigned int) const --> class ghost::Cpu", pybind11::arg("n"));
		cl.def("__getitem__", (class ghost::Cpu (ghost::CpuList::*)(unsigned long) const) &ghost::CpuList::operator[], "C++: ghost::CpuList::operator[](unsigned long) const --> class ghost::Cpu", pybind11::arg("idx"));
		cl.def("Front", (class ghost::Cpu (ghost::CpuList::*)() const) &ghost::CpuList::Front, "C++: ghost::CpuList::Front() const --> class ghost::Cpu");
		cl.def("Back", (class ghost::Cpu (ghost::CpuList::*)() const) &ghost::CpuList::Back, "C++: ghost::CpuList::Back() const --> class ghost::Cpu");
		cl.def("Empty", (bool (ghost::CpuList::*)() const) &ghost::CpuList::Empty, "C++: ghost::CpuList::Empty() const --> bool");
		cl.def("Size", (unsigned int (ghost::CpuList::*)() const) &ghost::CpuList::Size, "C++: ghost::CpuList::Size() const --> unsigned int");
		cl.def("topology", (const class ghost::Topology & (ghost::CpuList::*)() const) &ghost::CpuList::topology, "C++: ghost::CpuList::topology() const --> const class ghost::Topology &", pybind11::return_value_policy::automatic);
		cl.def("begin", (class ghost::CpuList::Iter (ghost::CpuList::*)() const) &ghost::CpuList::begin, "C++: ghost::CpuList::begin() const --> class ghost::CpuList::Iter");
		cl.def("end", (class ghost::CpuList::Iter (ghost::CpuList::*)() const) &ghost::CpuList::end, "C++: ghost::CpuList::end() const --> class ghost::CpuList::Iter");
		cl.def("CpuMaskStr", (std::string (ghost::CpuList::*)() const) &ghost::CpuList::CpuMaskStr, "C++: ghost::CpuList::CpuMaskStr() const --> std::string");
		cl.def("assign", (class ghost::CpuList & (ghost::CpuList::*)(const class ghost::CpuList &)) &ghost::CpuList::operator=, "C++: ghost::CpuList::operator=(const class ghost::CpuList &) --> class ghost::CpuList &", pybind11::return_value_policy::automatic, pybind11::arg(""));

		cl.def("__str__", [](ghost::CpuList const &o) -> std::string { std::ostringstream s; s << o; return s.str(); } );

		{ // ghost::CpuList::Iter file: line:300
			auto & enclosing_class = cl;
			pybind11::class_<ghost::CpuList::Iter, std::shared_ptr<ghost::CpuList::Iter>> cl(enclosing_class, "Iter", "");
			cl.def( pybind11::init<const class ghost::Topology &, const unsigned long *, unsigned long, unsigned long>(), pybind11::arg("topology"), pybind11::arg("bitmap"), pybind11::arg("map_size"), pybind11::arg("id") );

			cl.def("__eq__", (bool (ghost::CpuList::Iter::*)(const class ghost::CpuList::Iter &) const) &ghost::CpuList::Iter::operator==, "C++: ghost::CpuList::Iter::operator==(const class ghost::CpuList::Iter &) const --> bool", pybind11::arg("other"));
			cl.def("__ne__", (bool (ghost::CpuList::Iter::*)(const class ghost::CpuList::Iter &) const) &ghost::CpuList::Iter::operator!=, "C++: ghost::CpuList::Iter::operator!=(const class ghost::CpuList::Iter &) const --> bool", pybind11::arg("other"));
			cl.def("arrow", (const class ghost::Cpu * (ghost::CpuList::Iter::*)() const) &ghost::CpuList::Iter::operator->, "C++: ghost::CpuList::Iter::operator->() const --> const class ghost::Cpu *", pybind11::return_value_policy::automatic);
			cl.def("__mul__", (class ghost::Cpu (ghost::CpuList::Iter::*)() const) &ghost::CpuList::Iter::operator*, "C++: ghost::CpuList::Iter::operator*() const --> class ghost::Cpu");
			cl.def("plus_plus", (class ghost::Cpu (ghost::CpuList::Iter::*)()) &ghost::CpuList::Iter::operator++, "C++: ghost::CpuList::Iter::operator++() --> class ghost::Cpu");
			cl.def("plus_plus", (class ghost::Cpu (ghost::CpuList::Iter::*)(int)) &ghost::CpuList::Iter::operator++, "C++: ghost::CpuList::Iter::operator++(int) --> class ghost::Cpu", pybind11::arg(""));
		}

	}
}


// File: unknown/unknown_5.cpp
#include <filesystem>
#include <functional>
#include <ghost.h>
#include <iterator>
#include <memory>
#include <sstream> // __str__
#include <string>
#include <string_view>
#include <time.h>
#include <vector>

#include <functional>
#include <pybind11/pybind11.h>
#include <string>

#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

// ghost::StatusWord file:ghost.h line:378
struct PyCallBack_ghost_StatusWord : public ghost::StatusWord {
	using ghost::StatusWord::StatusWord;

	void Free() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::StatusWord *>(this), "Free");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"StatusWord::Free\"");
	}
};

void bind_unknown_unknown_5(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // ghost::Topology file: line:450
		pybind11::class_<ghost::Topology, std::shared_ptr<ghost::Topology>> cl(M("ghost"), "Topology", "");
		cl.def( pybind11::init( [](ghost::Topology const &o){ return new ghost::Topology(o); } ) );
		cl.def("EmptyCpuList", (class ghost::CpuList (ghost::Topology::*)() const) &ghost::Topology::EmptyCpuList, "C++: ghost::Topology::EmptyCpuList() const --> class ghost::CpuList");
		cl.def("ToCpuList", (class ghost::CpuList (ghost::Topology::*)(const class std::vector<int, class std::allocator<int> > &) const) &ghost::Topology::ToCpuList, "C++: ghost::Topology::ToCpuList(const class std::vector<int, class std::allocator<int> > &) const --> class ghost::CpuList", pybind11::arg("cpus"));
		cl.def("ToCpuList", (class ghost::CpuList (ghost::Topology::*)(const class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> > &) const) &ghost::Topology::ToCpuList, "C++: ghost::Topology::ToCpuList(const class std::vector<class ghost::Cpu, class std::allocator<class ghost::Cpu> > &) const --> class ghost::CpuList", pybind11::arg("cpus"));
		cl.def("num_cpus", (unsigned int (ghost::Topology::*)() const) &ghost::Topology::num_cpus, "C++: ghost::Topology::num_cpus() const --> unsigned int");
		cl.def("smt_count", (unsigned int (ghost::Topology::*)() const) &ghost::Topology::smt_count, "C++: ghost::Topology::smt_count() const --> unsigned int");
		cl.def("num_numa_nodes", (unsigned int (ghost::Topology::*)() const) &ghost::Topology::num_numa_nodes, "C++: ghost::Topology::num_numa_nodes() const --> unsigned int");
		cl.def("cpu", (class ghost::Cpu (ghost::Topology::*)(int) const) &ghost::Topology::cpu, "C++: ghost::Topology::cpu(int) const --> class ghost::Cpu", pybind11::arg("cpu"));
		cl.def("all_cpus", (const class ghost::CpuList & (ghost::Topology::*)() const) &ghost::Topology::all_cpus, "C++: ghost::Topology::all_cpus() const --> const class ghost::CpuList &", pybind11::return_value_policy::automatic);
		cl.def("Core", (class ghost::Cpu (ghost::Topology::*)(const class ghost::Cpu &) const) &ghost::Topology::Core, "C++: ghost::Topology::Core(const class ghost::Cpu &) const --> class ghost::Cpu", pybind11::arg("c"));
		cl.def("Cores", (class ghost::CpuList (ghost::Topology::*)(const class ghost::CpuList &) const) &ghost::Topology::Cores, "C++: ghost::Topology::Cores(const class ghost::CpuList &) const --> class ghost::CpuList", pybind11::arg("cpus"));
		cl.def("all_cores", (class ghost::CpuList (ghost::Topology::*)() const) &ghost::Topology::all_cores, "C++: ghost::Topology::all_cores() const --> class ghost::CpuList");
		cl.def("highest_node_idx", (int (ghost::Topology::*)() const) &ghost::Topology::highest_node_idx, "C++: ghost::Topology::highest_node_idx() const --> int");
		cl.def("ParseCpuStr", (class ghost::CpuList (ghost::Topology::*)(const std::string &) const) &ghost::Topology::ParseCpuStr, "C++: ghost::Topology::ParseCpuStr(const std::string &) const --> class ghost::CpuList", pybind11::arg("str"));
		cl.def("CpusOnNode", (const class ghost::CpuList & (ghost::Topology::*)(int) const) &ghost::Topology::CpusOnNode, "C++: ghost::Topology::CpusOnNode(int) const --> const class ghost::CpuList &", pybind11::return_value_policy::automatic, pybind11::arg("node"));
	}
	// ghost::MachineTopology() file: line:453
	M("ghost").def("MachineTopology", (class ghost::Topology * (*)()) &ghost::MachineTopology, "C++: ghost::MachineTopology() --> class ghost::Topology *", pybind11::return_value_policy::automatic);

	// ghost::UpdateTestTopology(const class std::filesystem::__cxx11::path &, bool) file: line:454
	M("ghost").def("UpdateTestTopology", (void (*)(const class std::filesystem::__cxx11::path &, bool)) &ghost::UpdateTestTopology, "C++: ghost::UpdateTestTopology(const class std::filesystem::__cxx11::path &, bool) --> void", pybind11::arg("test_directory"), pybind11::arg("has_l3_cache"));

	// ghost::CustomTopology() file: line:457
	M("ghost").def("CustomTopology", (class ghost::Topology * (*)()) &ghost::CustomTopology, "C++: ghost::CustomTopology() --> class ghost::Topology *", pybind11::return_value_policy::automatic);

	// ghost::TestTopology() file: line:689
	M("ghost").def("TestTopology", (class ghost::Topology * (*)()) &ghost::TestTopology, "C++: ghost::TestTopology() --> class ghost::Topology *", pybind11::return_value_policy::automatic);

	// ghost::verbose() file:ghost.h line:39
	M("ghost").def("verbose", (int (*)()) &ghost::verbose, "C++: ghost::verbose() --> int");

	// ghost::set_verbose(int) file:ghost.h line:44
	M("ghost").def("set_verbose", (void (*)(int)) &ghost::set_verbose, "C++: ghost::set_verbose(int) --> void", pybind11::arg("v"));

	{ // ghost::StatusWordTable file:ghost.h line:46
		pybind11::class_<ghost::StatusWordTable, std::shared_ptr<ghost::StatusWordTable>> cl(M("ghost"), "StatusWordTable", "");
		cl.def("id", (int (ghost::StatusWordTable::*)() const) &ghost::StatusWordTable::id, "C++: ghost::StatusWordTable::id() const --> int");
		cl.def("get", (struct ghost_status_word * (ghost::StatusWordTable::*)(unsigned int)) &ghost::StatusWordTable::get, "C++: ghost::StatusWordTable::get(unsigned int) --> struct ghost_status_word *", pybind11::return_value_policy::automatic, pybind11::arg("index"));
		cl.def("ForEachTaskStatusWord", (void (ghost::StatusWordTable::*)(const class std::function<void (struct ghost_status_word *, unsigned int, unsigned int)>)) &ghost::StatusWordTable::ForEachTaskStatusWord, "C++: ghost::StatusWordTable::ForEachTaskStatusWord(const class std::function<void (struct ghost_status_word *, unsigned int, unsigned int)>) --> void", pybind11::arg("l"));
	}
	{ // ghost::LocalStatusWordTable file:ghost.h line:86
		pybind11::class_<ghost::LocalStatusWordTable, std::shared_ptr<ghost::LocalStatusWordTable>, ghost::StatusWordTable> cl(M("ghost"), "LocalStatusWordTable", "");
		cl.def( pybind11::init<int, int, int>(), pybind11::arg("enclave_fd"), pybind11::arg("id"), pybind11::arg("numa_node") );

	}
	{ // ghost::Ghost file:ghost.h line:98
		pybind11::class_<ghost::Ghost, std::shared_ptr<ghost::Ghost>> cl(M("ghost"), "Ghost", "");
		cl.def( pybind11::init( [](){ return new ghost::Ghost(); } ) );
		cl.def_static("InitCore", (void (*)()) &ghost::Ghost::InitCore, "C++: ghost::Ghost::InitCore() --> void");
		cl.def_static("Run", (int (*)(const class ghost::Gtid, const unsigned int, const unsigned int, const int, const int)) &ghost::Ghost::Run, "C++: ghost::Ghost::Run(const class ghost::Gtid, const unsigned int, const unsigned int, const int, const int) --> int", pybind11::arg("gtid"), pybind11::arg("agent_barrier"), pybind11::arg("task_barrier"), pybind11::arg("cpu"), pybind11::arg("flags"));
		cl.def_static("Commit", (int (*)(const int)) &ghost::Ghost::Commit, "C++: ghost::Ghost::Commit(const int) --> int", pybind11::arg("cpu"));
		cl.def_static("CreateQueue", (int (*)(const int, const int, const int, unsigned long &)) &ghost::Ghost::CreateQueue, "C++: ghost::Ghost::CreateQueue(const int, const int, const int, unsigned long &) --> int", pybind11::arg("elems"), pybind11::arg("node"), pybind11::arg("flags"), pybind11::arg("mapsize"));
		cl.def_static("AssociateQueue", (int (*)(const int, const enum ghost_type, const unsigned long, const int, const int, int *)) &ghost::Ghost::AssociateQueue, "C++: ghost::Ghost::AssociateQueue(const int, const enum ghost_type, const unsigned long, const int, const int, int *) --> int", pybind11::arg("queue_fd"), pybind11::arg("type"), pybind11::arg("arg"), pybind11::arg("barrier"), pybind11::arg("flags"), pybind11::arg("status"));
		cl.def_static("SetDefaultQueue", (int (*)(const int)) &ghost::Ghost::SetDefaultQueue, "C++: ghost::Ghost::SetDefaultQueue(const int) --> int", pybind11::arg("queue_fd"));
		cl.def_static("GetStatusWordInfo", (int (*)(const enum ghost_type, const unsigned long, struct ghost_sw_info *const)) &ghost::Ghost::GetStatusWordInfo, "C++: ghost::Ghost::GetStatusWordInfo(const enum ghost_type, const unsigned long, struct ghost_sw_info *const) --> int", pybind11::arg("type"), pybind11::arg("arg"), pybind11::arg("info"));
		cl.def_static("FreeStatusWordInfo", (int (*)(struct ghost_sw_info *const)) &ghost::Ghost::FreeStatusWordInfo, "C++: ghost::Ghost::FreeStatusWordInfo(struct ghost_sw_info *const) --> int", pybind11::arg("info"));
		cl.def_static("GetTaskRuntime", (int (*)(const class ghost::Gtid, class absl::Duration *const)) &ghost::Ghost::GetTaskRuntime, "C++: ghost::Ghost::GetTaskRuntime(const class ghost::Gtid, class absl::Duration *const) --> int", pybind11::arg("gtid"), pybind11::arg("cpu_time"));
		cl.def_static("TimerFdSettime", [](const int & a0, const int & a1, struct itimerspec *const a2) -> int { return ghost::Ghost::TimerFdSettime(a0, a1, a2); }, "", pybind11::arg("fd"), pybind11::arg("flags"), pybind11::arg("itimerspec"));
		cl.def_static("TimerFdSettime", [](const int & a0, const int & a1, struct itimerspec *const a2, const class ghost::Cpu & a3) -> int { return ghost::Ghost::TimerFdSettime(a0, a1, a2, a3); }, "", pybind11::arg("fd"), pybind11::arg("flags"), pybind11::arg("itimerspec"), pybind11::arg("cpu"));
		cl.def_static("TimerFdSettime", [](const int & a0, const int & a1, struct itimerspec *const a2, const class ghost::Cpu & a3, const unsigned long & a4) -> int { return ghost::Ghost::TimerFdSettime(a0, a1, a2, a3, a4); }, "", pybind11::arg("fd"), pybind11::arg("flags"), pybind11::arg("itimerspec"), pybind11::arg("cpu"), pybind11::arg("type"));
		cl.def_static("TimerFdSettime", (int (*)(const int, const int, struct itimerspec *const, const class ghost::Cpu &, const unsigned long, const unsigned long)) &ghost::Ghost::TimerFdSettime, "C++: ghost::Ghost::TimerFdSettime(const int, const int, struct itimerspec *const, const class ghost::Cpu &, const unsigned long, const unsigned long) --> int", pybind11::arg("fd"), pybind11::arg("flags"), pybind11::arg("itimerspec"), pybind11::arg("cpu"), pybind11::arg("type"), pybind11::arg("cookie"));
		cl.def_static("GhostIsMountedAt", (bool (*)(const char *)) &ghost::Ghost::GhostIsMountedAt, "C++: ghost::Ghost::GhostIsMountedAt(const char *) --> bool", pybind11::arg("path"));
		cl.def_static("MountGhostfs", (void (*)()) &ghost::Ghost::MountGhostfs, "C++: ghost::Ghost::MountGhostfs() --> void");
		cl.def_static("GetSupportedVersions", (int (*)(class std::vector<unsigned int, class std::allocator<unsigned int> > &)) &ghost::Ghost::GetSupportedVersions, "C++: ghost::Ghost::GetSupportedVersions(class std::vector<unsigned int, class std::allocator<unsigned int> > &) --> int", pybind11::arg("versions"));
		cl.def_static("CheckVersion", (bool (*)()) &ghost::Ghost::CheckVersion, "C++: ghost::Ghost::CheckVersion() --> bool");
		cl.def_static("SetGlobalEnclaveFds", (void (*)(int, int)) &ghost::Ghost::SetGlobalEnclaveFds, "C++: ghost::Ghost::SetGlobalEnclaveFds(int, int) --> void", pybind11::arg("ctl_fd"), pybind11::arg("dir_fd"));
		cl.def_static("GetGlobalEnclaveCtlFd", (int (*)()) &ghost::Ghost::GetGlobalEnclaveCtlFd, "C++: ghost::Ghost::GetGlobalEnclaveCtlFd() --> int");
		cl.def_static("GetGlobalEnclaveDirFd", (int (*)()) &ghost::Ghost::GetGlobalEnclaveDirFd, "C++: ghost::Ghost::GetGlobalEnclaveDirFd() --> int");
		cl.def_static("CloseGlobalEnclaveFds", (void (*)()) &ghost::Ghost::CloseGlobalEnclaveFds, "C++: ghost::Ghost::CloseGlobalEnclaveFds() --> void");
		cl.def_static("SetGlobalStatusWordTable", (void (*)(class ghost::StatusWordTable *)) &ghost::Ghost::SetGlobalStatusWordTable, "C++: ghost::Ghost::SetGlobalStatusWordTable(class ghost::StatusWordTable *) --> void", pybind11::arg("swt"));
		cl.def_static("GetGlobalStatusWordTable", (class ghost::StatusWordTable * (*)()) &ghost::Ghost::GetGlobalStatusWordTable, "C++: ghost::Ghost::GetGlobalStatusWordTable() --> class ghost::StatusWordTable *", pybind11::return_value_policy::automatic);
		cl.def_static("SchedGetAffinity", (int (*)(const class ghost::Gtid &, class ghost::CpuList &)) &ghost::Ghost::SchedGetAffinity, "C++: ghost::Ghost::SchedGetAffinity(const class ghost::Gtid &, class ghost::CpuList &) --> int", pybind11::arg("gtid"), pybind11::arg("cpulist"));
		cl.def_static("SchedSetAffinity", (int (*)(const class ghost::Gtid &, const class ghost::CpuList &)) &ghost::Ghost::SchedSetAffinity, "C++: ghost::Ghost::SchedSetAffinity(const class ghost::Gtid &, const class ghost::CpuList &) --> int", pybind11::arg("gtid"), pybind11::arg("cpulist"));
	}
	{ // ghost::GhostSignals file:ghost.h line:359
		pybind11::class_<ghost::GhostSignals, std::shared_ptr<ghost::GhostSignals>> cl(M("ghost"), "GhostSignals", "");
		cl.def( pybind11::init( [](){ return new ghost::GhostSignals(); } ) );
		cl.def_static("Init", (void (*)()) &ghost::GhostSignals::Init, "C++: ghost::GhostSignals::Init() --> void");
		cl.def_static("IgnoreCommon", (void (*)()) &ghost::GhostSignals::IgnoreCommon, "C++: ghost::GhostSignals::IgnoreCommon() --> void");
		cl.def_static("AddHandler", (void (*)(int, class std::function<bool (int)>)) &ghost::GhostSignals::AddHandler, "C++: ghost::GhostSignals::AddHandler(int, class std::function<bool (int)>) --> void", pybind11::arg("signal"), pybind11::arg("handler"));
	}
	{ // ghost::StatusWord file:ghost.h line:378
		pybind11::class_<ghost::StatusWord, std::shared_ptr<ghost::StatusWord>, PyCallBack_ghost_StatusWord> cl(M("ghost"), "StatusWord", "");
		cl.def(pybind11::init<PyCallBack_ghost_StatusWord const &>());
		cl.def("Free", (void (ghost::StatusWord::*)()) &ghost::StatusWord::Free, "C++: ghost::StatusWord::Free() --> void");
		cl.def("empty", (bool (ghost::StatusWord::*)() const) &ghost::StatusWord::empty, "C++: ghost::StatusWord::empty() const --> bool");
		cl.def_static("NullBarrierToken", (unsigned int (*)()) &ghost::StatusWord::NullBarrierToken, "C++: ghost::StatusWord::NullBarrierToken() --> unsigned int");
		cl.def("barrier", (unsigned int (ghost::StatusWord::*)() const) &ghost::StatusWord::barrier, "C++: ghost::StatusWord::barrier() const --> unsigned int");
		cl.def("switch_time", (class absl::Time (ghost::StatusWord::*)() const) &ghost::StatusWord::switch_time, "C++: ghost::StatusWord::switch_time() const --> class absl::Time");
		cl.def("runtime", (unsigned long (ghost::StatusWord::*)() const) &ghost::StatusWord::runtime, "C++: ghost::StatusWord::runtime() const --> unsigned long");
		cl.def("stale", (bool (ghost::StatusWord::*)(unsigned int) const) &ghost::StatusWord::stale, "C++: ghost::StatusWord::stale(unsigned int) const --> bool", pybind11::arg("prev"));
		cl.def("in_use", (bool (ghost::StatusWord::*)() const) &ghost::StatusWord::in_use, "C++: ghost::StatusWord::in_use() const --> bool");
		cl.def("can_free", (bool (ghost::StatusWord::*)() const) &ghost::StatusWord::can_free, "C++: ghost::StatusWord::can_free() const --> bool");
		cl.def("on_cpu", (bool (ghost::StatusWord::*)() const) &ghost::StatusWord::on_cpu, "C++: ghost::StatusWord::on_cpu() const --> bool");
		cl.def("cpu_avail", (bool (ghost::StatusWord::*)() const) &ghost::StatusWord::cpu_avail, "C++: ghost::StatusWord::cpu_avail() const --> bool");
		cl.def("runnable", (bool (ghost::StatusWord::*)() const) &ghost::StatusWord::runnable, "C++: ghost::StatusWord::runnable() const --> bool");
		cl.def("boosted_priority", (bool (ghost::StatusWord::*)() const) &ghost::StatusWord::boosted_priority, "C++: ghost::StatusWord::boosted_priority() const --> bool");
		cl.def("id", (unsigned int (ghost::StatusWord::*)() const) &ghost::StatusWord::id, "C++: ghost::StatusWord::id() const --> unsigned int");
		cl.def("owner", (class ghost::Gtid (ghost::StatusWord::*)() const) &ghost::StatusWord::owner, "C++: ghost::StatusWord::owner() const --> class ghost::Gtid");
		cl.def("sw_info", (struct ghost_sw_info (ghost::StatusWord::*)() const) &ghost::StatusWord::sw_info, "C++: ghost::StatusWord::sw_info() const --> struct ghost_sw_info");
		cl.def("sw", (const struct ghost_status_word * (ghost::StatusWord::*)() const) &ghost::StatusWord::sw, "C++: ghost::StatusWord::sw() const --> const struct ghost_status_word *", pybind11::return_value_policy::automatic);
		cl.def("assign", (class ghost::StatusWord & (ghost::StatusWord::*)(const class ghost::StatusWord &)) &ghost::StatusWord::operator=, "C++: ghost::StatusWord::operator=(const class ghost::StatusWord &) --> class ghost::StatusWord &", pybind11::return_value_policy::automatic, pybind11::arg(""));

		{ // ghost::StatusWord::AgentSW file:ghost.h line:380
			auto & enclosing_class = cl;
			pybind11::class_<ghost::StatusWord::AgentSW, std::shared_ptr<ghost::StatusWord::AgentSW>> cl(enclosing_class, "AgentSW", "");
			cl.def( pybind11::init( [](){ return new ghost::StatusWord::AgentSW(); } ) );
		}

	}
}


// File: ghost.cpp
#include <functional>
#include <ghost.h>
#include <memory>
#include <sstream> // __str__
#include <string>
#include <string_view>

#include <functional>
#include <pybind11/pybind11.h>
#include <string>

#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

// ghost::LocalStatusWord file:ghost.h line:451
struct PyCallBack_ghost_LocalStatusWord : public ghost::LocalStatusWord {
	using ghost::LocalStatusWord::LocalStatusWord;

	void Free() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::LocalStatusWord *>(this), "Free");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return LocalStatusWord::Free();
	}
};

void bind_ghost(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // ghost::LocalStatusWord file:ghost.h line:451
		pybind11::class_<ghost::LocalStatusWord, std::shared_ptr<ghost::LocalStatusWord>, PyCallBack_ghost_LocalStatusWord, ghost::StatusWord> cl(M("ghost"), "LocalStatusWord", "");
		cl.def( pybind11::init( [](){ return new ghost::LocalStatusWord(); }, [](){ return new PyCallBack_ghost_LocalStatusWord(); } ) );
		cl.def( pybind11::init<class ghost::Gtid, struct ghost_sw_info>(), pybind11::arg("gtid"), pybind11::arg("sw_info") );

		cl.def( pybind11::init<struct ghost::StatusWord::AgentSW>(), pybind11::arg("") );

		cl.def("Free", (void (ghost::LocalStatusWord::*)()) &ghost::LocalStatusWord::Free, "C++: ghost::LocalStatusWord::Free() --> void");
	}
	{ // ghost::PeriodicEdge file:ghost.h line:471
		pybind11::class_<ghost::PeriodicEdge, std::shared_ptr<ghost::PeriodicEdge>> cl(M("ghost"), "PeriodicEdge", "");
		cl.def( pybind11::init<class absl::Duration>(), pybind11::arg("d") );

		cl.def( pybind11::init( [](ghost::PeriodicEdge const &o){ return new ghost::PeriodicEdge(o); } ) );
		cl.def("Edge", (bool (ghost::PeriodicEdge::*)()) &ghost::PeriodicEdge::Edge, "C++: ghost::PeriodicEdge::Edge() --> bool");
	}
	{ // ghost::GhostThread file:ghost.h line:501
		pybind11::class_<ghost::GhostThread, std::shared_ptr<ghost::GhostThread>> cl(M("ghost"), "GhostThread", "");
		cl.def( pybind11::init<enum ghost::GhostThread::KernelScheduler, class std::function<void (void)>>(), pybind11::arg("ksched"), pybind11::arg("work") );


		pybind11::enum_<ghost::GhostThread::KernelScheduler>(cl, "KernelScheduler", "")
			.value("kCfs", ghost::GhostThread::KernelScheduler::kCfs)
			.value("kGhost", ghost::GhostThread::KernelScheduler::kGhost);

		cl.def("Join", (void (ghost::GhostThread::*)()) &ghost::GhostThread::Join, "C++: ghost::GhostThread::Join() --> void");
		cl.def("Joinable", (bool (ghost::GhostThread::*)() const) &ghost::GhostThread::Joinable, "C++: ghost::GhostThread::Joinable() const --> bool");
		cl.def("tid", (int (ghost::GhostThread::*)()) &ghost::GhostThread::tid, "C++: ghost::GhostThread::tid() --> int");
		cl.def("gtid", (class ghost::Gtid (ghost::GhostThread::*)()) &ghost::GhostThread::gtid, "C++: ghost::GhostThread::gtid() --> class ghost::Gtid");
		cl.def_static("SetGlobalEnclaveFdsOnce", (void (*)()) &ghost::GhostThread::SetGlobalEnclaveFdsOnce, "C++: ghost::GhostThread::SetGlobalEnclaveFdsOnce() --> void");
	}
	// ghost::SchedTaskEnterGhost(int, int) file:ghost.h line:572
	M("ghost").def("SchedTaskEnterGhost", [](int const & a0) -> int { return ghost::SchedTaskEnterGhost(a0); }, "", pybind11::arg("pid"));
	M("ghost").def("SchedTaskEnterGhost", (int (*)(int, int)) &ghost::SchedTaskEnterGhost, "C++: ghost::SchedTaskEnterGhost(int, int) --> int", pybind11::arg("pid"), pybind11::arg("dir_fd"));

	// ghost::SchedAgentEnterGhost(int, int) file:ghost.h line:575
	M("ghost").def("SchedAgentEnterGhost", (int (*)(int, int)) &ghost::SchedAgentEnterGhost, "C++: ghost::SchedAgentEnterGhost(int, int) --> int", pybind11::arg("ctl_fd"), pybind11::arg("queue_fd"));

}


// File: unknown/unknown_6.cpp
#include <functional>
#include <ghost.h>
#include <iterator>
#include <lib/agent.h>
#include <lib/channel.h>
#include <lib/scheduler.h>
#include <memory>
#include <sstream> // __str__
#include <string>
#include <string_view>
#include <vector>

#include <functional>
#include <pybind11/pybind11.h>
#include <string>

#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

// ghost::Enclave file: line:72
struct PyCallBack_ghost_Enclave : public ghost::Enclave {
	using ghost::Enclave::Enclave;

	class ghost::RunRequest * GetRunRequest(const class ghost::Cpu & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Enclave *>(this), "GetRunRequest");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<class ghost::RunRequest *>::value) {
				static pybind11::detail::override_caster_t<class ghost::RunRequest *> caster;
				return pybind11::detail::cast_ref<class ghost::RunRequest *>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class ghost::RunRequest *>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"Enclave::GetRunRequest\"");
	}
	bool CommitRunRequest(class ghost::RunRequest * a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Enclave *>(this), "CommitRunRequest");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"Enclave::CommitRunRequest\"");
	}
	void SubmitRunRequest(class ghost::RunRequest * a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Enclave *>(this), "SubmitRunRequest");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"Enclave::SubmitRunRequest\"");
	}
	bool CompleteRunRequest(class ghost::RunRequest * a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Enclave *>(this), "CompleteRunRequest");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"Enclave::CompleteRunRequest\"");
	}
	void LocalYieldRunRequest(const class ghost::RunRequest * a0, unsigned int a1, int a2) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Enclave *>(this), "LocalYieldRunRequest");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"Enclave::LocalYieldRunRequest\"");
	}
	bool PingRunRequest(const class ghost::RunRequest * a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Enclave *>(this), "PingRunRequest");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"Enclave::PingRunRequest\"");
	}
	bool CommitRunRequests(const class ghost::CpuList & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Enclave *>(this), "CommitRunRequests");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return Enclave::CommitRunRequests(a0);
	}
	void SubmitRunRequests(const class ghost::CpuList & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Enclave *>(this), "SubmitRunRequests");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Enclave::SubmitRunRequests(a0);
	}
	bool CommitSyncRequests(const class ghost::CpuList & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Enclave *>(this), "CommitSyncRequests");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"Enclave::CommitSyncRequests\"");
	}
	bool SubmitSyncRequests(const class ghost::CpuList & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Enclave *>(this), "SubmitSyncRequests");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"Enclave::SubmitSyncRequests\"");
	}
	class ghost::Agent * GetAgent(const class ghost::Cpu & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Enclave *>(this), "GetAgent");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<class ghost::Agent *>::value) {
				static pybind11::detail::override_caster_t<class ghost::Agent *> caster;
				return pybind11::detail::cast_ref<class ghost::Agent *>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class ghost::Agent *>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"Enclave::GetAgent\"");
	}
	void ForEachTaskStatusWord(class std::function<void (struct ghost_status_word *, unsigned int, unsigned int)> a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Enclave *>(this), "ForEachTaskStatusWord");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"Enclave::ForEachTaskStatusWord\"");
	}
	void AdvertiseOnline() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Enclave *>(this), "AdvertiseOnline");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Enclave::AdvertiseOnline();
	}
	void PrepareToExit() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Enclave *>(this), "PrepareToExit");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Enclave::PrepareToExit();
	}
	void WaitForOldAgent() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Enclave *>(this), "WaitForOldAgent");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"Enclave::WaitForOldAgent\"");
	}
	void InsertBpfPrograms() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Enclave *>(this), "InsertBpfPrograms");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Enclave::InsertBpfPrograms();
	}
	void DisableMyBpfProgLoad() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Enclave *>(this), "DisableMyBpfProgLoad");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Enclave::DisableMyBpfProgLoad();
	}
	int GetCtlFd() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Enclave *>(this), "GetCtlFd");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::override_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return Enclave::GetCtlFd();
	}
	void SetRunnableTimeout(class absl::Duration a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Enclave *>(this), "SetRunnableTimeout");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Enclave::SetRunnableTimeout(a0);
	}
	void SetCommitAtTick(bool a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Enclave *>(this), "SetCommitAtTick");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Enclave::SetCommitAtTick(a0);
	}
	void SetDeliverTicks(bool a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Enclave *>(this), "SetDeliverTicks");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Enclave::SetDeliverTicks(a0);
	}
	void AttachAgent(const class ghost::Cpu & a0, class ghost::Agent * a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Enclave *>(this), "AttachAgent");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Enclave::AttachAgent(a0, a1);
	}
	void DetachAgent(class ghost::Agent * a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Enclave *>(this), "DetachAgent");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Enclave::DetachAgent(a0);
	}
	void AttachScheduler(class ghost::Scheduler * a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Enclave *>(this), "AttachScheduler");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Enclave::AttachScheduler(a0);
	}
	void DetachScheduler(class ghost::Scheduler * a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Enclave *>(this), "DetachScheduler");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Enclave::DetachScheduler(a0);
	}
	void DerivedReady() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Enclave *>(this), "DerivedReady");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Enclave::DerivedReady();
	}
};

void bind_unknown_unknown_6(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// ghost::CpuTickConfig file: line:45
	pybind11::enum_<ghost::CpuTickConfig>(M("ghost"), "CpuTickConfig", "")
		.value("kNoTicks", ghost::CpuTickConfig::kNoTicks)
		.value("kAllTicks", ghost::CpuTickConfig::kAllTicks);

;

	{ // ghost::AgentConfig file: line:52
		pybind11::class_<ghost::AgentConfig, std::shared_ptr<ghost::AgentConfig>> cl(M("ghost"), "AgentConfig", "");
		cl.def( pybind11::init( [](){ return new ghost::AgentConfig(); } ), "doc" );
		cl.def( pybind11::init( [](class ghost::Topology * a0){ return new ghost::AgentConfig(a0); } ), "doc" , pybind11::arg("topology"));
		cl.def( pybind11::init<class ghost::Topology *, class ghost::CpuList>(), pybind11::arg("topology"), pybind11::arg("cpus") );

		cl.def( pybind11::init( [](ghost::AgentConfig const &o){ return new ghost::AgentConfig(o); } ) );
		cl.def_readwrite("cpus_", &ghost::AgentConfig::cpus_);
		cl.def_readwrite("enclave_fd_", &ghost::AgentConfig::enclave_fd_);
		cl.def_readwrite("tick_config_", &ghost::AgentConfig::tick_config_);
		cl.def_readwrite("stderr_fd_", &ghost::AgentConfig::stderr_fd_);
		cl.def_readwrite("mlockall_", &ghost::AgentConfig::mlockall_);
		cl.def("assign", (class ghost::AgentConfig & (ghost::AgentConfig::*)(const class ghost::AgentConfig &)) &ghost::AgentConfig::operator=, "C++: ghost::AgentConfig::operator=(const class ghost::AgentConfig &) --> class ghost::AgentConfig &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // ghost::Enclave file: line:72
		pybind11::class_<ghost::Enclave, std::shared_ptr<ghost::Enclave>, PyCallBack_ghost_Enclave> cl(M("ghost"), "Enclave", "");
		cl.def( pybind11::init<const class ghost::AgentConfig>(), pybind11::arg("config") );

		cl.def("GetRunRequest", (class ghost::RunRequest * (ghost::Enclave::*)(const class ghost::Cpu &)) &ghost::Enclave::GetRunRequest, "C++: ghost::Enclave::GetRunRequest(const class ghost::Cpu &) --> class ghost::RunRequest *", pybind11::return_value_policy::automatic, pybind11::arg("cpu"));
		cl.def("CommitRunRequest", (bool (ghost::Enclave::*)(class ghost::RunRequest *)) &ghost::Enclave::CommitRunRequest, "C++: ghost::Enclave::CommitRunRequest(class ghost::RunRequest *) --> bool", pybind11::arg("req"));
		cl.def("SubmitRunRequest", (void (ghost::Enclave::*)(class ghost::RunRequest *)) &ghost::Enclave::SubmitRunRequest, "C++: ghost::Enclave::SubmitRunRequest(class ghost::RunRequest *) --> void", pybind11::arg("req"));
		cl.def("CompleteRunRequest", (bool (ghost::Enclave::*)(class ghost::RunRequest *)) &ghost::Enclave::CompleteRunRequest, "C++: ghost::Enclave::CompleteRunRequest(class ghost::RunRequest *) --> bool", pybind11::arg("req"));
		cl.def("LocalYieldRunRequest", (void (ghost::Enclave::*)(const class ghost::RunRequest *, unsigned int, int)) &ghost::Enclave::LocalYieldRunRequest, "C++: ghost::Enclave::LocalYieldRunRequest(const class ghost::RunRequest *, unsigned int, int) --> void", pybind11::arg("req"), pybind11::arg("agent_barrier"), pybind11::arg("flags"));
		cl.def("PingRunRequest", (bool (ghost::Enclave::*)(const class ghost::RunRequest *)) &ghost::Enclave::PingRunRequest, "C++: ghost::Enclave::PingRunRequest(const class ghost::RunRequest *) --> bool", pybind11::arg("req"));
		cl.def("CommitRunRequests", (bool (ghost::Enclave::*)(const class ghost::CpuList &)) &ghost::Enclave::CommitRunRequests, "C++: ghost::Enclave::CommitRunRequests(const class ghost::CpuList &) --> bool", pybind11::arg("cpu_list"));
		cl.def("SubmitRunRequests", (void (ghost::Enclave::*)(const class ghost::CpuList &)) &ghost::Enclave::SubmitRunRequests, "C++: ghost::Enclave::SubmitRunRequests(const class ghost::CpuList &) --> void", pybind11::arg("cpu_list"));
		cl.def("CommitSyncRequests", (bool (ghost::Enclave::*)(const class ghost::CpuList &)) &ghost::Enclave::CommitSyncRequests, "C++: ghost::Enclave::CommitSyncRequests(const class ghost::CpuList &) --> bool", pybind11::arg("cpu_list"));
		cl.def("SubmitSyncRequests", (bool (ghost::Enclave::*)(const class ghost::CpuList &)) &ghost::Enclave::SubmitSyncRequests, "C++: ghost::Enclave::SubmitSyncRequests(const class ghost::CpuList &) --> bool", pybind11::arg("cpu_list"));
		cl.def("GetAgent", (class ghost::Agent * (ghost::Enclave::*)(const class ghost::Cpu &)) &ghost::Enclave::GetAgent, "C++: ghost::Enclave::GetAgent(const class ghost::Cpu &) --> class ghost::Agent *", pybind11::return_value_policy::automatic, pybind11::arg("cpu"));
		cl.def("ForEachTaskStatusWord", (void (ghost::Enclave::*)(class std::function<void (struct ghost_status_word *, unsigned int, unsigned int)>)) &ghost::Enclave::ForEachTaskStatusWord, "C++: ghost::Enclave::ForEachTaskStatusWord(class std::function<void (struct ghost_status_word *, unsigned int, unsigned int)>) --> void", pybind11::arg("l"));
		cl.def("AdvertiseOnline", (void (ghost::Enclave::*)()) &ghost::Enclave::AdvertiseOnline, "C++: ghost::Enclave::AdvertiseOnline() --> void");
		cl.def("PrepareToExit", (void (ghost::Enclave::*)()) &ghost::Enclave::PrepareToExit, "C++: ghost::Enclave::PrepareToExit() --> void");
		cl.def("WaitForOldAgent", (void (ghost::Enclave::*)()) &ghost::Enclave::WaitForOldAgent, "C++: ghost::Enclave::WaitForOldAgent() --> void");
		cl.def("InsertBpfPrograms", (void (ghost::Enclave::*)()) &ghost::Enclave::InsertBpfPrograms, "C++: ghost::Enclave::InsertBpfPrograms() --> void");
		cl.def("DisableMyBpfProgLoad", (void (ghost::Enclave::*)()) &ghost::Enclave::DisableMyBpfProgLoad, "C++: ghost::Enclave::DisableMyBpfProgLoad() --> void");
		cl.def("GetCtlFd", (int (ghost::Enclave::*)()) &ghost::Enclave::GetCtlFd, "C++: ghost::Enclave::GetCtlFd() --> int");
		cl.def("SetRunnableTimeout", (void (ghost::Enclave::*)(class absl::Duration)) &ghost::Enclave::SetRunnableTimeout, "C++: ghost::Enclave::SetRunnableTimeout(class absl::Duration) --> void", pybind11::arg("d"));
		cl.def("SetCommitAtTick", (void (ghost::Enclave::*)(bool)) &ghost::Enclave::SetCommitAtTick, "C++: ghost::Enclave::SetCommitAtTick(bool) --> void", pybind11::arg("enabled"));
		cl.def("SetDeliverTicks", (void (ghost::Enclave::*)(bool)) &ghost::Enclave::SetDeliverTicks, "C++: ghost::Enclave::SetDeliverTicks(bool) --> void", pybind11::arg("enabled"));
		cl.def("Ready", (void (ghost::Enclave::*)()) &ghost::Enclave::Ready, "C++: ghost::Enclave::Ready() --> void");
		cl.def("topology", (class ghost::Topology * (ghost::Enclave::*)() const) &ghost::Enclave::topology, "C++: ghost::Enclave::topology() const --> class ghost::Topology *", pybind11::return_value_policy::automatic);
		cl.def("cpus", (const class ghost::CpuList * (ghost::Enclave::*)() const) &ghost::Enclave::cpus, "C++: ghost::Enclave::cpus() const --> const class ghost::CpuList *", pybind11::return_value_policy::automatic);
		cl.def("AttachAgent", (void (ghost::Enclave::*)(const class ghost::Cpu &, class ghost::Agent *)) &ghost::Enclave::AttachAgent, "C++: ghost::Enclave::AttachAgent(const class ghost::Cpu &, class ghost::Agent *) --> void", pybind11::arg("cpu"), pybind11::arg("agent"));
		cl.def("DetachAgent", (void (ghost::Enclave::*)(class ghost::Agent *)) &ghost::Enclave::DetachAgent, "C++: ghost::Enclave::DetachAgent(class ghost::Agent *) --> void", pybind11::arg("agent"));
	}
	{ // ghost::RunRequestOptions file: line:236
		pybind11::class_<ghost::RunRequestOptions, std::shared_ptr<ghost::RunRequestOptions>> cl(M("ghost"), "RunRequestOptions", "");
		cl.def( pybind11::init( [](){ return new ghost::RunRequestOptions(); } ) );
		cl.def( pybind11::init( [](ghost::RunRequestOptions const &o){ return new ghost::RunRequestOptions(o); } ) );
		cl.def_readwrite("target", &ghost::RunRequestOptions::target);
		cl.def_readwrite("target_barrier", &ghost::RunRequestOptions::target_barrier);
		cl.def_readwrite("agent_barrier", &ghost::RunRequestOptions::agent_barrier);
		cl.def_readwrite("commit_flags", &ghost::RunRequestOptions::commit_flags);
		cl.def_readwrite("run_flags", &ghost::RunRequestOptions::run_flags);
		cl.def_readwrite("sync_group_owner", &ghost::RunRequestOptions::sync_group_owner);
		cl.def_readwrite("allow_txn_target_on_cpu", &ghost::RunRequestOptions::allow_txn_target_on_cpu);
	}
	{ // ghost::RunRequest file: line:280
		pybind11::class_<ghost::RunRequest, std::shared_ptr<ghost::RunRequest>> cl(M("ghost"), "RunRequest", "");
		cl.def( pybind11::init( [](){ return new ghost::RunRequest(); } ) );
		cl.def("Init", (void (ghost::RunRequest::*)(class ghost::Enclave *, class ghost::Cpu, struct ghost_txn *)) &ghost::RunRequest::Init, "C++: ghost::RunRequest::Init(class ghost::Enclave *, class ghost::Cpu, struct ghost_txn *) --> void", pybind11::arg("enclave"), pybind11::arg("cpu"), pybind11::arg("txn"));
		cl.def("Open", (void (ghost::RunRequest::*)(const struct ghost::RunRequestOptions &)) &ghost::RunRequest::Open, "C++: ghost::RunRequest::Open(const struct ghost::RunRequestOptions &) --> void", pybind11::arg("options"));
		cl.def("OpenUnschedule", (void (ghost::RunRequest::*)()) &ghost::RunRequest::OpenUnschedule, "C++: ghost::RunRequest::OpenUnschedule() --> void");
		cl.def("Abort", (bool (ghost::RunRequest::*)()) &ghost::RunRequest::Abort, "C++: ghost::RunRequest::Abort() --> bool");
		cl.def("LocalYield", (void (ghost::RunRequest::*)(const unsigned int, const int)) &ghost::RunRequest::LocalYield, "C++: ghost::RunRequest::LocalYield(const unsigned int, const int) --> void", pybind11::arg("agent_barrier"), pybind11::arg("flags"));
		cl.def("Ping", (bool (ghost::RunRequest::*)()) &ghost::RunRequest::Ping, "C++: ghost::RunRequest::Ping() --> bool");
		cl.def("Commit", (bool (ghost::RunRequest::*)()) &ghost::RunRequest::Commit, "C++: ghost::RunRequest::Commit() --> bool");
		cl.def("Submit", (void (ghost::RunRequest::*)()) &ghost::RunRequest::Submit, "C++: ghost::RunRequest::Submit() --> void");
		cl.def("cpu", (class ghost::Cpu (ghost::RunRequest::*)() const) &ghost::RunRequest::cpu, "C++: ghost::RunRequest::cpu() const --> class ghost::Cpu");
		cl.def("state", (enum ghost_txn_state (ghost::RunRequest::*)() const) &ghost::RunRequest::state, "C++: ghost::RunRequest::state() const --> enum ghost_txn_state");
		cl.def("open", (bool (ghost::RunRequest::*)() const) &ghost::RunRequest::open, "C++: ghost::RunRequest::open() const --> bool");
		cl.def("committed", (bool (ghost::RunRequest::*)() const) &ghost::RunRequest::committed, "C++: ghost::RunRequest::committed() const --> bool");
		cl.def("failed", (bool (ghost::RunRequest::*)() const) &ghost::RunRequest::failed, "C++: ghost::RunRequest::failed() const --> bool");
		cl.def("succeeded", (bool (ghost::RunRequest::*)() const) &ghost::RunRequest::succeeded, "C++: ghost::RunRequest::succeeded() const --> bool");
		cl.def("commit_time", (class absl::Time (ghost::RunRequest::*)() const) &ghost::RunRequest::commit_time, "C++: ghost::RunRequest::commit_time() const --> class absl::Time");
		cl.def("sync_group_owner_get", (int (ghost::RunRequest::*)() const) &ghost::RunRequest::sync_group_owner_get, "C++: ghost::RunRequest::sync_group_owner_get() const --> int");
		cl.def("sync_group_owner_set", (void (ghost::RunRequest::*)(int)) &ghost::RunRequest::sync_group_owner_set, "C++: ghost::RunRequest::sync_group_owner_set(int) --> void", pybind11::arg("owner"));
		cl.def("sync_group_owned", (bool (ghost::RunRequest::*)() const) &ghost::RunRequest::sync_group_owned, "C++: ghost::RunRequest::sync_group_owned() const --> bool");
		cl.def("agent_barrier", (unsigned int (ghost::RunRequest::*)() const) &ghost::RunRequest::agent_barrier, "C++: ghost::RunRequest::agent_barrier() const --> unsigned int");
		cl.def("target", (class ghost::Gtid (ghost::RunRequest::*)() const) &ghost::RunRequest::target, "C++: ghost::RunRequest::target() const --> class ghost::Gtid");
		cl.def("target_barrier", (unsigned int (ghost::RunRequest::*)() const) &ghost::RunRequest::target_barrier, "C++: ghost::RunRequest::target_barrier() const --> unsigned int");
		cl.def("commit_flags", (int (ghost::RunRequest::*)() const) &ghost::RunRequest::commit_flags, "C++: ghost::RunRequest::commit_flags() const --> int");
		cl.def("run_flags", (int (ghost::RunRequest::*)() const) &ghost::RunRequest::run_flags, "C++: ghost::RunRequest::run_flags() const --> int");
		cl.def("allow_txn_target_on_cpu", (bool (ghost::RunRequest::*)() const) &ghost::RunRequest::allow_txn_target_on_cpu, "C++: ghost::RunRequest::allow_txn_target_on_cpu() const --> bool");
		cl.def("cpu_seqnum", (unsigned long (ghost::RunRequest::*)() const) &ghost::RunRequest::cpu_seqnum, "C++: ghost::RunRequest::cpu_seqnum() const --> unsigned long");
		cl.def("txn", (struct ghost_txn * (ghost::RunRequest::*)()) &ghost::RunRequest::txn, "C++: ghost::RunRequest::txn() --> struct ghost_txn *", pybind11::return_value_policy::automatic);
		cl.def_static("StateToString", (std::string (*)(enum ghost_txn_state)) &ghost::RunRequest::StateToString, "C++: ghost::RunRequest::StateToString(enum ghost_txn_state) --> std::string", pybind11::arg("state"));
	}
	{ // ghost::LocalEnclave file: line:419
		pybind11::class_<ghost::LocalEnclave, std::shared_ptr<ghost::LocalEnclave>, ghost::Enclave> cl(M("ghost"), "LocalEnclave", "");
		cl.def( pybind11::init<class ghost::AgentConfig>(), pybind11::arg("config") );

		cl.def("GetRunRequest", (class ghost::RunRequest * (ghost::LocalEnclave::*)(const class ghost::Cpu &)) &ghost::LocalEnclave::GetRunRequest, "C++: ghost::LocalEnclave::GetRunRequest(const class ghost::Cpu &) --> class ghost::RunRequest *", pybind11::return_value_policy::automatic, pybind11::arg("cpu"));
		cl.def("CommitRunRequest", (bool (ghost::LocalEnclave::*)(class ghost::RunRequest *)) &ghost::LocalEnclave::CommitRunRequest, "C++: ghost::LocalEnclave::CommitRunRequest(class ghost::RunRequest *) --> bool", pybind11::arg("req"));
		cl.def("SubmitRunRequest", (void (ghost::LocalEnclave::*)(class ghost::RunRequest *)) &ghost::LocalEnclave::SubmitRunRequest, "C++: ghost::LocalEnclave::SubmitRunRequest(class ghost::RunRequest *) --> void", pybind11::arg("req"));
		cl.def("CompleteRunRequest", (bool (ghost::LocalEnclave::*)(class ghost::RunRequest *)) &ghost::LocalEnclave::CompleteRunRequest, "C++: ghost::LocalEnclave::CompleteRunRequest(class ghost::RunRequest *) --> bool", pybind11::arg("req"));
		cl.def("LocalYieldRunRequest", (void (ghost::LocalEnclave::*)(const class ghost::RunRequest *, unsigned int, int)) &ghost::LocalEnclave::LocalYieldRunRequest, "C++: ghost::LocalEnclave::LocalYieldRunRequest(const class ghost::RunRequest *, unsigned int, int) --> void", pybind11::arg("req"), pybind11::arg("agent_barrier"), pybind11::arg("flags"));
		cl.def("PingRunRequest", (bool (ghost::LocalEnclave::*)(const class ghost::RunRequest *)) &ghost::LocalEnclave::PingRunRequest, "C++: ghost::LocalEnclave::PingRunRequest(const class ghost::RunRequest *) --> bool", pybind11::arg("req"));
		cl.def("CommitRunRequests", (bool (ghost::LocalEnclave::*)(const class ghost::CpuList &)) &ghost::LocalEnclave::CommitRunRequests, "C++: ghost::LocalEnclave::CommitRunRequests(const class ghost::CpuList &) --> bool", pybind11::arg("cpu_list"));
		cl.def("SubmitRunRequests", (void (ghost::LocalEnclave::*)(const class ghost::CpuList &)) &ghost::LocalEnclave::SubmitRunRequests, "C++: ghost::LocalEnclave::SubmitRunRequests(const class ghost::CpuList &) --> void", pybind11::arg("cpu_list"));
		cl.def("CommitSyncRequests", (bool (ghost::LocalEnclave::*)(const class ghost::CpuList &)) &ghost::LocalEnclave::CommitSyncRequests, "C++: ghost::LocalEnclave::CommitSyncRequests(const class ghost::CpuList &) --> bool", pybind11::arg("cpu_list"));
		cl.def("SubmitSyncRequests", (bool (ghost::LocalEnclave::*)(const class ghost::CpuList &)) &ghost::LocalEnclave::SubmitSyncRequests, "C++: ghost::LocalEnclave::SubmitSyncRequests(const class ghost::CpuList &) --> bool", pybind11::arg("cpu_list"));
		cl.def("GetAgent", (class ghost::Agent * (ghost::LocalEnclave::*)(const class ghost::Cpu &)) &ghost::LocalEnclave::GetAgent, "C++: ghost::LocalEnclave::GetAgent(const class ghost::Cpu &) --> class ghost::Agent *", pybind11::return_value_policy::automatic, pybind11::arg("cpu"));
		cl.def("AttachAgent", (void (ghost::LocalEnclave::*)(const class ghost::Cpu &, class ghost::Agent *)) &ghost::LocalEnclave::AttachAgent, "C++: ghost::LocalEnclave::AttachAgent(const class ghost::Cpu &, class ghost::Agent *) --> void", pybind11::arg("cpu"), pybind11::arg("agent"));
		cl.def("DetachAgent", (void (ghost::LocalEnclave::*)(class ghost::Agent *)) &ghost::LocalEnclave::DetachAgent, "C++: ghost::LocalEnclave::DetachAgent(class ghost::Agent *) --> void", pybind11::arg("agent"));
		cl.def("GetNrTasks", (int (ghost::LocalEnclave::*)()) &ghost::LocalEnclave::GetNrTasks, "C++: ghost::LocalEnclave::GetNrTasks() --> int");
		cl.def("GetAbiVersion", (int (ghost::LocalEnclave::*)()) &ghost::LocalEnclave::GetAbiVersion, "C++: ghost::LocalEnclave::GetAbiVersion() --> int");
		cl.def("SetRunnableTimeout", (void (ghost::LocalEnclave::*)(class absl::Duration)) &ghost::LocalEnclave::SetRunnableTimeout, "C++: ghost::LocalEnclave::SetRunnableTimeout(class absl::Duration) --> void", pybind11::arg("d"));
		cl.def("SetCommitAtTick", (void (ghost::LocalEnclave::*)(bool)) &ghost::LocalEnclave::SetCommitAtTick, "C++: ghost::LocalEnclave::SetCommitAtTick(bool) --> void", pybind11::arg("enabled"));
		cl.def("SetDeliverTicks", (void (ghost::LocalEnclave::*)(bool)) &ghost::LocalEnclave::SetDeliverTicks, "C++: ghost::LocalEnclave::SetDeliverTicks(bool) --> void", pybind11::arg("enabled"));
		cl.def("ForEachTaskStatusWord", (void (ghost::LocalEnclave::*)(const class std::function<void (struct ghost_status_word *, unsigned int, unsigned int)>)) &ghost::LocalEnclave::ForEachTaskStatusWord, "C++: ghost::LocalEnclave::ForEachTaskStatusWord(const class std::function<void (struct ghost_status_word *, unsigned int, unsigned int)>) --> void", pybind11::arg("l"));
		cl.def("AdvertiseOnline", (void (ghost::LocalEnclave::*)()) &ghost::LocalEnclave::AdvertiseOnline, "C++: ghost::LocalEnclave::AdvertiseOnline() --> void");
		cl.def("PrepareToExit", (void (ghost::LocalEnclave::*)()) &ghost::LocalEnclave::PrepareToExit, "C++: ghost::LocalEnclave::PrepareToExit() --> void");
		cl.def("WaitForOldAgent", (void (ghost::LocalEnclave::*)()) &ghost::LocalEnclave::WaitForOldAgent, "C++: ghost::LocalEnclave::WaitForOldAgent() --> void");
		cl.def("InsertBpfPrograms", (void (ghost::LocalEnclave::*)()) &ghost::LocalEnclave::InsertBpfPrograms, "C++: ghost::LocalEnclave::InsertBpfPrograms() --> void");
		cl.def("DisableMyBpfProgLoad", (void (ghost::LocalEnclave::*)()) &ghost::LocalEnclave::DisableMyBpfProgLoad, "C++: ghost::LocalEnclave::DisableMyBpfProgLoad() --> void");
		cl.def("GetCtlFd", (int (ghost::LocalEnclave::*)()) &ghost::LocalEnclave::GetCtlFd, "C++: ghost::LocalEnclave::GetCtlFd() --> int");
		cl.def_static("MakeNextEnclave", (int (*)()) &ghost::LocalEnclave::MakeNextEnclave, "C++: ghost::LocalEnclave::MakeNextEnclave() --> int");
		cl.def_static("GetEnclaveDirectory", (int (*)(int)) &ghost::LocalEnclave::GetEnclaveDirectory, "C++: ghost::LocalEnclave::GetEnclaveDirectory(int) --> int", pybind11::arg("ctl_fd"));
		cl.def_static("WriteEnclaveTunable", (void (*)(int, class std::basic_string_view<char, struct std::char_traits<char> >, class std::basic_string_view<char, struct std::char_traits<char> >)) &ghost::LocalEnclave::WriteEnclaveTunable, "C++: ghost::LocalEnclave::WriteEnclaveTunable(int, class std::basic_string_view<char, struct std::char_traits<char> >, class std::basic_string_view<char, struct std::char_traits<char> >) --> void", pybind11::arg("dir_fd"), pybind11::arg("tunable_path"), pybind11::arg("tunable_value"));
		cl.def_static("GetCpuDataRegion", (int (*)(int)) &ghost::LocalEnclave::GetCpuDataRegion, "C++: ghost::LocalEnclave::GetCpuDataRegion(int) --> int", pybind11::arg("dir_fd"));
		cl.def_static("WaitForAgentOnlineValue", (void (*)(int, int)) &ghost::LocalEnclave::WaitForAgentOnlineValue, "C++: ghost::LocalEnclave::WaitForAgentOnlineValue(int, int) --> void", pybind11::arg("dir_fd"), pybind11::arg("until"));
		cl.def_static("GetNrTasks", (int (*)(int)) &ghost::LocalEnclave::GetNrTasks, "C++: ghost::LocalEnclave::GetNrTasks(int) --> int", pybind11::arg("dir_fd"));
		cl.def_static("GetAbiVersion", (int (*)(int)) &ghost::LocalEnclave::GetAbiVersion, "C++: ghost::LocalEnclave::GetAbiVersion(int) --> int", pybind11::arg("dir_fd"));
		cl.def_static("DestroyEnclave", (void (*)(int)) &ghost::LocalEnclave::DestroyEnclave, "C++: ghost::LocalEnclave::DestroyEnclave(int) --> void", pybind11::arg("ctl_fd"));
		cl.def_static("DestroyAllEnclaves", (void (*)()) &ghost::LocalEnclave::DestroyAllEnclaves, "C++: ghost::LocalEnclave::DestroyAllEnclaves() --> void");
	}
}


// File: unknown/unknown_7.cpp
#include <functional>
#include <ghost.h>
#include <ios>
#include <iterator>
#include <lib/agent.h>
#include <lib/channel.h>
#include <lib/scheduler.h>
#include <locale>
#include <memory>
#include <ostream>
#include <sstream> // __str__
#include <streambuf>
#include <string>
#include <string_view>
#include <vector>

#include <functional>
#include <pybind11/pybind11.h>
#include <string>

#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

// ghost::Agent file:lib/agent.h line:41
struct PyCallBack_ghost_Agent : public ghost::Agent {
	using ghost::Agent::Agent;

	void StartBegin() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Agent *>(this), "StartBegin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Agent::StartBegin();
	}
	void StartComplete() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Agent *>(this), "StartComplete");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Agent::StartComplete();
	}
	void TerminateBegin() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Agent *>(this), "TerminateBegin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Agent::TerminateBegin();
	}
	void TerminateComplete() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Agent *>(this), "TerminateComplete");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Agent::TerminateComplete();
	}
	const class ghost::StatusWord & status_word() const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Agent *>(this), "status_word");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<const class ghost::StatusWord &>::value) {
				static pybind11::detail::override_caster_t<const class ghost::StatusWord &> caster;
				return pybind11::detail::cast_ref<const class ghost::StatusWord &>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<const class ghost::StatusWord &>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"Agent::status_word\"");
	}
	void AgentThread() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Agent *>(this), "AgentThread");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"Agent::AgentThread\"");
	}
	class ghost::Scheduler * AgentScheduler() const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Agent *>(this), "AgentScheduler");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class ghost::Scheduler *>::value) {
				static pybind11::detail::override_caster_t<class ghost::Scheduler *> caster;
				return pybind11::detail::cast_ref<class ghost::Scheduler *>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class ghost::Scheduler *>(std::move(o));
		}
		return Agent::AgentScheduler();
	}
	void ThreadBody() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Agent *>(this), "ThreadBody");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"Agent::ThreadBody\"");
	}
};

// ghost::LocalAgent file:lib/agent.h line:125
struct PyCallBack_ghost_LocalAgent : public ghost::LocalAgent {
	using ghost::LocalAgent::LocalAgent;

	const class ghost::StatusWord & status_word() const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::LocalAgent *>(this), "status_word");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<const class ghost::StatusWord &>::value) {
				static pybind11::detail::override_caster_t<const class ghost::StatusWord &> caster;
				return pybind11::detail::cast_ref<const class ghost::StatusWord &>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<const class ghost::StatusWord &>(std::move(o));
		}
		return LocalAgent::status_word();
	}
	void StartBegin() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::LocalAgent *>(this), "StartBegin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Agent::StartBegin();
	}
	void StartComplete() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::LocalAgent *>(this), "StartComplete");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Agent::StartComplete();
	}
	void TerminateBegin() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::LocalAgent *>(this), "TerminateBegin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Agent::TerminateBegin();
	}
	void TerminateComplete() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::LocalAgent *>(this), "TerminateComplete");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Agent::TerminateComplete();
	}
	void AgentThread() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::LocalAgent *>(this), "AgentThread");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"Agent::AgentThread\"");
	}
	class ghost::Scheduler * AgentScheduler() const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::LocalAgent *>(this), "AgentScheduler");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class ghost::Scheduler *>::value) {
				static pybind11::detail::override_caster_t<class ghost::Scheduler *> caster;
				return pybind11::detail::cast_ref<class ghost::Scheduler *>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class ghost::Scheduler *>(std::move(o));
		}
		return Agent::AgentScheduler();
	}
	void ThreadBody() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::LocalAgent *>(this), "ThreadBody");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"Agent::ThreadBody\"");
	}
};

// ghost::Channel file:lib/channel.h line:86
struct PyCallBack_ghost_Channel : public ghost::Channel {
	using ghost::Channel::Channel;

	class ghost::Message Peek() const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Channel *>(this), "Peek");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class ghost::Message>::value) {
				static pybind11::detail::override_caster_t<class ghost::Message> caster;
				return pybind11::detail::cast_ref<class ghost::Message>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class ghost::Message>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"Channel::Peek\"");
	}
	void Consume(const class ghost::Message & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Channel *>(this), "Consume");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"Channel::Consume\"");
	}
	unsigned long max_elements() const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Channel *>(this), "max_elements");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned long>::value) {
				static pybind11::detail::override_caster_t<unsigned long> caster;
				return pybind11::detail::cast_ref<unsigned long>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<unsigned long>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"Channel::max_elements\"");
	}
	bool AssociateTask(class ghost::Gtid a0, int a1, int * a2) const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Channel *>(this), "AssociateTask");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"Channel::AssociateTask\"");
	}
	bool SetEnclaveDefault() const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Channel *>(this), "SetEnclaveDefault");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"Channel::SetEnclaveDefault\"");
	}
	int GetFd() const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Channel *>(this), "GetFd");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::override_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"Channel::GetFd\"");
	}
};

// ghost::LocalChannel file:lib/channel.h line:124
struct PyCallBack_ghost_LocalChannel : public ghost::LocalChannel {
	using ghost::LocalChannel::LocalChannel;

	class ghost::Message Peek() const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::LocalChannel *>(this), "Peek");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class ghost::Message>::value) {
				static pybind11::detail::override_caster_t<class ghost::Message> caster;
				return pybind11::detail::cast_ref<class ghost::Message>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class ghost::Message>(std::move(o));
		}
		return LocalChannel::Peek();
	}
	void Consume(const class ghost::Message & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::LocalChannel *>(this), "Consume");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return LocalChannel::Consume(a0);
	}
	unsigned long max_elements() const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::LocalChannel *>(this), "max_elements");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned long>::value) {
				static pybind11::detail::override_caster_t<unsigned long> caster;
				return pybind11::detail::cast_ref<unsigned long>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<unsigned long>(std::move(o));
		}
		return LocalChannel::max_elements();
	}
	bool AssociateTask(class ghost::Gtid a0, int a1, int * a2) const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::LocalChannel *>(this), "AssociateTask");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return LocalChannel::AssociateTask(a0, a1, a2);
	}
	bool SetEnclaveDefault() const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::LocalChannel *>(this), "SetEnclaveDefault");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return LocalChannel::SetEnclaveDefault();
	}
	int GetFd() const override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::LocalChannel *>(this), "GetFd");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::override_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return LocalChannel::GetFd();
	}
};

// ghost::Scheduler file:lib/scheduler.h line:64
struct PyCallBack_ghost_Scheduler : public ghost::Scheduler {
	using ghost::Scheduler::Scheduler;

	void EnclaveReady() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Scheduler *>(this), "EnclaveReady");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Scheduler::EnclaveReady();
	}
	void DiscoverTasks() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Scheduler *>(this), "DiscoverTasks");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Scheduler::DiscoverTasks();
	}
	class ghost::Channel & GetDefaultChannel() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Scheduler *>(this), "GetDefaultChannel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class ghost::Channel &>::value) {
				static pybind11::detail::override_caster_t<class ghost::Channel &> caster;
				return pybind11::detail::cast_ref<class ghost::Channel &>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class ghost::Channel &>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"Scheduler::GetDefaultChannel\"");
	}
	void DumpState(const class ghost::Cpu & a0, int a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const ghost::Scheduler *>(this), "DumpState");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Scheduler::DumpState(a0, a1);
	}
};

void bind_unknown_unknown_7(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // ghost::GhostShmem file: line:43
		pybind11::class_<ghost::GhostShmem, std::shared_ptr<ghost::GhostShmem>> cl(M("ghost"), "GhostShmem", "");
		cl.def( pybind11::init( [](){ return new ghost::GhostShmem(); } ) );
		cl.def( pybind11::init<long, const char *, unsigned long>(), pybind11::arg("client_version"), pybind11::arg("name"), pybind11::arg("size") );

		cl.def("Attach", (bool (ghost::GhostShmem::*)(long, const char *, int)) &ghost::GhostShmem::Attach, "C++: ghost::GhostShmem::Attach(long, const char *, int) --> bool", pybind11::arg("client_version"), pybind11::arg("name"), pybind11::arg("pid"));
		cl.def("MarkReady", (void (ghost::GhostShmem::*)()) &ghost::GhostShmem::MarkReady, "C++: ghost::GhostShmem::MarkReady() --> void");
		cl.def("bytes", (char * (ghost::GhostShmem::*)()) &ghost::GhostShmem::bytes, "C++: ghost::GhostShmem::bytes() --> char *", pybind11::return_value_policy::automatic);
		cl.def("size", (unsigned long (ghost::GhostShmem::*)()) &ghost::GhostShmem::size, "C++: ghost::GhostShmem::size() --> unsigned long");
		cl.def("absolute_size", (unsigned long (ghost::GhostShmem::*)() const) &ghost::GhostShmem::absolute_size, "C++: ghost::GhostShmem::absolute_size() const --> unsigned long");
		cl.def("absolute_start", (const void * (ghost::GhostShmem::*)() const) &ghost::GhostShmem::absolute_start, "C++: ghost::GhostShmem::absolute_start() const --> const void *", pybind11::return_value_policy::automatic);
		cl.def("Owner", (int (ghost::GhostShmem::*)() const) &ghost::GhostShmem::Owner, "C++: ghost::GhostShmem::Owner() const --> int");
		cl.def_static("OverHeadbytes", (unsigned long (*)()) &ghost::GhostShmem::OverHeadbytes, "C++: ghost::GhostShmem::OverHeadbytes() --> unsigned long");
		cl.def_static("GetShmemBlob", (class ghost::GhostShmem * (*)(unsigned long)) &ghost::GhostShmem::GetShmemBlob, "C++: ghost::GhostShmem::GetShmemBlob(unsigned long) --> class ghost::GhostShmem *", pybind11::return_value_policy::automatic, pybind11::arg("size"));
	}
	{ // ghost::Agent file:lib/agent.h line:41
		pybind11::class_<ghost::Agent, std::shared_ptr<ghost::Agent>, PyCallBack_ghost_Agent> cl(M("ghost"), "Agent", "");
		cl.def("StartBegin", (void (ghost::Agent::*)()) &ghost::Agent::StartBegin, "C++: ghost::Agent::StartBegin() --> void");
		cl.def("StartComplete", (void (ghost::Agent::*)()) &ghost::Agent::StartComplete, "C++: ghost::Agent::StartComplete() --> void");
		cl.def("Start", (void (ghost::Agent::*)()) &ghost::Agent::Start, "C++: ghost::Agent::Start() --> void");
		cl.def("TerminateBegin", (void (ghost::Agent::*)()) &ghost::Agent::TerminateBegin, "C++: ghost::Agent::TerminateBegin() --> void");
		cl.def("TerminateComplete", (void (ghost::Agent::*)()) &ghost::Agent::TerminateComplete, "C++: ghost::Agent::TerminateComplete() --> void");
		cl.def("Terminate", (void (ghost::Agent::*)()) &ghost::Agent::Terminate, "C++: ghost::Agent::Terminate() --> void");
		cl.def("Finished", (bool (ghost::Agent::*)() const) &ghost::Agent::Finished, "C++: ghost::Agent::Finished() const --> bool");
		cl.def("cpu", (class ghost::Cpu (ghost::Agent::*)() const) &ghost::Agent::cpu, "C++: ghost::Agent::cpu() const --> class ghost::Cpu");
		cl.def("Ping", (bool (ghost::Agent::*)()) &ghost::Agent::Ping, "C++: ghost::Agent::Ping() --> bool");
		cl.def("gtid", (class ghost::Gtid (ghost::Agent::*)() const) &ghost::Agent::gtid, "C++: ghost::Agent::gtid() const --> class ghost::Gtid");
		cl.def("cpu_avail", (bool (ghost::Agent::*)() const) &ghost::Agent::cpu_avail, "C++: ghost::Agent::cpu_avail() const --> bool");
		cl.def("boosted_priority", (bool (ghost::Agent::*)() const) &ghost::Agent::boosted_priority, "C++: ghost::Agent::boosted_priority() const --> bool");
		cl.def("barrier", (unsigned int (ghost::Agent::*)() const) &ghost::Agent::barrier, "C++: ghost::Agent::barrier() const --> unsigned int");
		cl.def("enclave", (class ghost::Enclave * (ghost::Agent::*)() const) &ghost::Agent::enclave, "C++: ghost::Agent::enclave() const --> class ghost::Enclave *", pybind11::return_value_policy::automatic);
		cl.def("status_word", (const class ghost::StatusWord & (ghost::Agent::*)() const) &ghost::Agent::status_word, "C++: ghost::Agent::status_word() const --> const class ghost::StatusWord &", pybind11::return_value_policy::automatic);
	}
	{ // ghost::LocalAgent file:lib/agent.h line:125
		pybind11::class_<ghost::LocalAgent, std::shared_ptr<ghost::LocalAgent>, PyCallBack_ghost_LocalAgent, ghost::Agent> cl(M("ghost"), "LocalAgent", "");
		cl.def( pybind11::init<class ghost::Enclave *, const class ghost::Cpu &>(), pybind11::arg("enclave"), pybind11::arg("cpu") );

		cl.def("status_word", (const class ghost::StatusWord & (ghost::LocalAgent::*)() const) &ghost::LocalAgent::status_word, "C++: ghost::LocalAgent::status_word() const --> const class ghost::StatusWord &", pybind11::return_value_policy::automatic);
	}
	{ // ghost::AgentRpcArgs file:lib/agent.h line:261
		pybind11::class_<ghost::AgentRpcArgs, std::shared_ptr<ghost::AgentRpcArgs>> cl(M("ghost"), "AgentRpcArgs", "");
		cl.def( pybind11::init( [](){ return new ghost::AgentRpcArgs(); } ) );
		cl.def( pybind11::init( [](ghost::AgentRpcArgs const &o){ return new ghost::AgentRpcArgs(o); } ) );
		cl.def_readwrite("arg0", &ghost::AgentRpcArgs::arg0);
		cl.def_readwrite("arg1", &ghost::AgentRpcArgs::arg1);
		cl.def_readwrite("buffer", &ghost::AgentRpcArgs::buffer);
	}
	{ // ghost::AgentRpcResponse file:lib/agent.h line:271
		pybind11::class_<ghost::AgentRpcResponse, std::shared_ptr<ghost::AgentRpcResponse>> cl(M("ghost"), "AgentRpcResponse", "");
		cl.def( pybind11::init( [](){ return new ghost::AgentRpcResponse(); } ) );
		cl.def( pybind11::init( [](ghost::AgentRpcResponse const &o){ return new ghost::AgentRpcResponse(o); } ) );
		cl.def_readwrite("response_code", &ghost::AgentRpcResponse::response_code);
		cl.def_readwrite("buffer", &ghost::AgentRpcResponse::buffer);
	}
	{ // ghost::Message file:lib/channel.h line:31
		pybind11::class_<ghost::Message, std::shared_ptr<ghost::Message>> cl(M("ghost"), "Message", "");
		cl.def( pybind11::init( [](){ return new ghost::Message(); } ) );
		cl.def( pybind11::init<const struct ghost_msg *>(), pybind11::arg("msg") );

		cl.def( pybind11::init( [](ghost::Message const &o){ return new ghost::Message(o); } ) );
		cl.def("type", (unsigned short (ghost::Message::*)() const) &ghost::Message::type, "C++: ghost::Message::type() const --> unsigned short");
		cl.def("length", (unsigned short (ghost::Message::*)() const) &ghost::Message::length, "C++: ghost::Message::length() const --> unsigned short");
		cl.def("seqnum", (unsigned int (ghost::Message::*)() const) &ghost::Message::seqnum, "C++: ghost::Message::seqnum() const --> unsigned int");
		cl.def("payload", (const void * (ghost::Message::*)() const) &ghost::Message::payload, "C++: ghost::Message::payload() const --> const void *", pybind11::return_value_policy::automatic);
		cl.def("empty", (bool (ghost::Message::*)() const) &ghost::Message::empty, "C++: ghost::Message::empty() const --> bool");
		cl.def("is_cpu_msg", (bool (ghost::Message::*)() const) &ghost::Message::is_cpu_msg, "C++: ghost::Message::is_cpu_msg() const --> bool");
		cl.def("cpu", (int (ghost::Message::*)() const) &ghost::Message::cpu, "C++: ghost::Message::cpu() const --> int");
		cl.def("is_task_msg", (bool (ghost::Message::*)() const) &ghost::Message::is_task_msg, "C++: ghost::Message::is_task_msg() const --> bool");
		cl.def("gtid", (class ghost::Gtid (ghost::Message::*)() const) &ghost::Message::gtid, "C++: ghost::Message::gtid() const --> class ghost::Gtid");
		cl.def("describe_type", (class std::basic_string_view<char, struct std::char_traits<char> > (ghost::Message::*)() const) &ghost::Message::describe_type, "C++: ghost::Message::describe_type() const --> class std::basic_string_view<char, struct std::char_traits<char> >");
		cl.def("stringify", (std::string (ghost::Message::*)() const) &ghost::Message::stringify, "C++: ghost::Message::stringify() const --> std::string");
		cl.def("msg", (const struct ghost_msg * (ghost::Message::*)() const) &ghost::Message::msg, "C++: ghost::Message::msg() const --> const struct ghost_msg *", pybind11::return_value_policy::automatic);
		cl.def("__eq__", (bool (ghost::Message::*)(const class ghost::Message &) const) &ghost::Message::operator==, "C++: ghost::Message::operator==(const class ghost::Message &) const --> bool", pybind11::arg("other"));

		cl.def("__str__", [](ghost::Message const &o) -> std::string { std::ostringstream s; s << o; return s.str(); } );
	}
	{ // ghost::Channel file:lib/channel.h line:86
		pybind11::class_<ghost::Channel, std::shared_ptr<ghost::Channel>, PyCallBack_ghost_Channel> cl(M("ghost"), "Channel", "");
		cl.def( pybind11::init( [](){ return new PyCallBack_ghost_Channel(); } ) );
		cl.def(pybind11::init<PyCallBack_ghost_Channel const &>());
		cl.def("Peek", (class ghost::Message (ghost::Channel::*)() const) &ghost::Channel::Peek, "C++: ghost::Channel::Peek() const --> class ghost::Message");
		cl.def("Consume", (void (ghost::Channel::*)(const class ghost::Message &)) &ghost::Channel::Consume, "C++: ghost::Channel::Consume(const class ghost::Message &) --> void", pybind11::arg("msg"));
		cl.def("max_elements", (unsigned long (ghost::Channel::*)() const) &ghost::Channel::max_elements, "C++: ghost::Channel::max_elements() const --> unsigned long");
		cl.def("AssociateTask", (bool (ghost::Channel::*)(class ghost::Gtid, int, int *) const) &ghost::Channel::AssociateTask, "C++: ghost::Channel::AssociateTask(class ghost::Gtid, int, int *) const --> bool", pybind11::arg("gtid"), pybind11::arg("barrier"), pybind11::arg("status"));
		cl.def("SetEnclaveDefault", (bool (ghost::Channel::*)() const) &ghost::Channel::SetEnclaveDefault, "C++: ghost::Channel::SetEnclaveDefault() const --> bool");
		cl.def("GetFd", (int (ghost::Channel::*)() const) &ghost::Channel::GetFd, "C++: ghost::Channel::GetFd() const --> int");
		cl.def("assign", (class ghost::Channel & (ghost::Channel::*)(const class ghost::Channel &)) &ghost::Channel::operator=, "C++: ghost::Channel::operator=(const class ghost::Channel &) --> class ghost::Channel &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // ghost::LocalChannel file:lib/channel.h line:124
		pybind11::class_<ghost::LocalChannel, std::shared_ptr<ghost::LocalChannel>, PyCallBack_ghost_LocalChannel, ghost::Channel> cl(M("ghost"), "LocalChannel", "");
		cl.def( pybind11::init( [](int const & a0, int const & a1){ return new ghost::LocalChannel(a0, a1); }, [](int const & a0, int const & a1){ return new PyCallBack_ghost_LocalChannel(a0, a1); } ), "doc");
		cl.def( pybind11::init<int, int, class ghost::CpuList>(), pybind11::arg("elems"), pybind11::arg("node"), pybind11::arg("cpulist") );

		cl.def("Peek", (class ghost::Message (ghost::LocalChannel::*)() const) &ghost::LocalChannel::Peek, "C++: ghost::LocalChannel::Peek() const --> class ghost::Message");
		cl.def("Consume", (void (ghost::LocalChannel::*)(const class ghost::Message &)) &ghost::LocalChannel::Consume, "C++: ghost::LocalChannel::Consume(const class ghost::Message &) --> void", pybind11::arg("msg"));
		cl.def("max_elements", (unsigned long (ghost::LocalChannel::*)() const) &ghost::LocalChannel::max_elements, "C++: ghost::LocalChannel::max_elements() const --> unsigned long");
		cl.def("AssociateTask", (bool (ghost::LocalChannel::*)(class ghost::Gtid, int, int *) const) &ghost::LocalChannel::AssociateTask, "C++: ghost::LocalChannel::AssociateTask(class ghost::Gtid, int, int *) const --> bool", pybind11::arg("gtid"), pybind11::arg("barrier"), pybind11::arg("status"));
		cl.def("SetEnclaveDefault", (bool (ghost::LocalChannel::*)() const) &ghost::LocalChannel::SetEnclaveDefault, "C++: ghost::LocalChannel::SetEnclaveDefault() const --> bool");
		cl.def("GetFd", (int (ghost::LocalChannel::*)() const) &ghost::LocalChannel::GetFd, "C++: ghost::LocalChannel::GetFd() const --> int");
	}
	// ghost::Peek(class ghost::Channel *) file:lib/channel.h line:158
	M("ghost").def("Peek", (class ghost::Message (*)(class ghost::Channel *)) &ghost::Peek, "C++: ghost::Peek(class ghost::Channel *) --> class ghost::Message", pybind11::arg("f"));

	// ghost::Consume(class ghost::Channel *, const class ghost::Message &) file:lib/channel.h line:159
	M("ghost").def("Consume", (void (*)(class ghost::Channel *, const class ghost::Message &)) &ghost::Consume, "C++: ghost::Consume(class ghost::Channel *, const class ghost::Message &) --> void", pybind11::arg("f"), pybind11::arg("msg"));

	{ // ghost::Scheduler file:lib/scheduler.h line:64
		pybind11::class_<ghost::Scheduler, std::shared_ptr<ghost::Scheduler>, PyCallBack_ghost_Scheduler> cl(M("ghost"), "Scheduler", "");
		cl.def( pybind11::init<class ghost::Enclave *, class ghost::CpuList>(), pybind11::arg("enclave"), pybind11::arg("cpus") );

		cl.def(pybind11::init<PyCallBack_ghost_Scheduler const &>());
		cl.def("EnclaveReady", (void (ghost::Scheduler::*)()) &ghost::Scheduler::EnclaveReady, "C++: ghost::Scheduler::EnclaveReady() --> void");
		cl.def("DiscoverTasks", (void (ghost::Scheduler::*)()) &ghost::Scheduler::DiscoverTasks, "C++: ghost::Scheduler::DiscoverTasks() --> void");
		cl.def("GetDefaultChannel", (class ghost::Channel & (ghost::Scheduler::*)()) &ghost::Scheduler::GetDefaultChannel, "C++: ghost::Scheduler::GetDefaultChannel() --> class ghost::Channel &", pybind11::return_value_policy::automatic);
		cl.def("SchedTopology", (const class ghost::Topology * (ghost::Scheduler::*)() const) &ghost::Scheduler::SchedTopology, "C++: ghost::Scheduler::SchedTopology() const --> const class ghost::Topology *", pybind11::return_value_policy::automatic);
		cl.def("DumpState", (void (ghost::Scheduler::*)(const class ghost::Cpu &, int)) &ghost::Scheduler::DumpState, "C++: ghost::Scheduler::DumpState(const class ghost::Cpu &, int) --> void", pybind11::arg("cpu"), pybind11::arg("flags"));
	}
}


#include <map>
#include <algorithm>
#include <functional>
#include <memory>
#include <stdexcept>
#include <string>

#include <pybind11/pybind11.h>

typedef std::function< pybind11::module & (std::string const &) > ModuleGetter;

void bind_bits_types_struct_itimerspec(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_std_string_view(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_bits_types_struct_FILE(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_std_stl_vector(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_std_stl_vector_1(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_std_chrono(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_1(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_2(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_std_fs_path(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_3(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_4(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_5(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_ghost(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_6(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_7(std::function< pybind11::module &(std::string const &namespace_) > &M);


PYBIND11_MODULE(libbindertest, root_module) {
	root_module.doc() = "libbindertest module";

	std::map <std::string, pybind11::module> modules;
	ModuleGetter M = [&](std::string const &namespace_) -> pybind11::module & {
		auto it = modules.find(namespace_);
		if( it == modules.end() ) throw std::runtime_error("Attempt to access pybind11::module for namespace " + namespace_ + " before it was created!!!");
		return it->second;
	};

	modules[""] = root_module;

	static std::vector<std::string> const reserved_python_words {"nonlocal", "global", };

	auto mangle_namespace_name(
		[](std::string const &ns) -> std::string {
			if ( std::find(reserved_python_words.begin(), reserved_python_words.end(), ns) == reserved_python_words.end() ) return ns;
			else return ns+'_';
		}
	);

	std::vector< std::pair<std::string, std::string> > sub_modules {
		{"", "absl"},
		{"absl", "time_internal"},
		{"absl::time_internal", "cctz"},
		{"absl::time_internal::cctz", "detail"},
		{"", "ghost"},
		{"", "std"},
		{"std", "chrono"},
		{"std", "filesystem"},
		{"std::filesystem", "__cxx11"},
	};
	for(auto &p : sub_modules ) modules[p.first.size() ? p.first+"::"+p.second : p.second] = modules[p.first].def_submodule( mangle_namespace_name(p.second).c_str(), ("Bindings for " + p.first + "::" + p.second + " namespace").c_str() );

	//pybind11::class_<std::shared_ptr<void>>(M(""), "_encapsulated_data_");

	bind_bits_types_struct_itimerspec(M);
	bind_std_string_view(M);
	bind_bits_types_struct_FILE(M);
	bind_std_stl_vector(M);
	bind_std_stl_vector_1(M);
	bind_std_chrono(M);
	bind_unknown_unknown(M);
	bind_unknown_unknown_1(M);
	bind_unknown_unknown_2(M);
	bind_std_fs_path(M);
	bind_unknown_unknown_3(M);
	bind_unknown_unknown_4(M);
	bind_unknown_unknown_5(M);
	bind_ghost(M);
	bind_unknown_unknown_6(M);
	bind_unknown_unknown_7(M);

}

// Source list file: tmp/libbindertest.sources
// libbindertest.cpp
// bits/types/struct_itimerspec.cpp
// std/string_view.cpp
// bits/types/struct_FILE.cpp
// std/stl_vector.cpp
// std/stl_vector_1.cpp
// std/chrono.cpp
// unknown/unknown.cpp
// unknown/unknown_1.cpp
// unknown/unknown_2.cpp
// std/fs_path.cpp
// unknown/unknown_3.cpp
// unknown/unknown_4.cpp
// unknown/unknown_5.cpp
// ghost.cpp
// unknown/unknown_6.cpp
// unknown/unknown_7.cpp

// Modules list file: tmp/libbindertest.modules
// absl absl.time_internal absl.time_internal.cctz absl.time_internal.cctz.detail ghost std std.chrono std.filesystem std.filesystem.__cxx11 
