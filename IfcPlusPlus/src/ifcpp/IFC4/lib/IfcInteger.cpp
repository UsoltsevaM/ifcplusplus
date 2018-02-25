/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcSimpleValue.h"
#include "ifcpp/IFC4/include/IfcInteger.h"

// TYPE IfcInteger = INTEGER;
IfcInteger::IfcInteger() {}
IfcInteger::IfcInteger( int value ) { m_value = value; }
IfcInteger::~IfcInteger() {}
shared_ptr<IfcPPObject> IfcInteger::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcInteger> copy_self( new IfcInteger() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcInteger::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCINTEGER("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcInteger::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcInteger> IfcInteger::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcInteger>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcInteger>(); }
	shared_ptr<IfcInteger> type_object( new IfcInteger() );
	readInteger( arg, type_object->m_value );
	return type_object;
}
