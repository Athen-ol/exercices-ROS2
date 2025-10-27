# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tutorial_interfaces:srv/CheckParams.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CheckParams_Request(type):
    """Metaclass of message 'CheckParams_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tutorial_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tutorial_interfaces.srv.CheckParams_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__check_params__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__check_params__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__check_params__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__check_params__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__check_params__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CheckParams_Request(metaclass=Metaclass_CheckParams_Request):
    """Message class 'CheckParams_Request'."""

    __slots__ = [
        '_computer_name',
        '_domain_id',
    ]

    _fields_and_field_types = {
        'computer_name': 'string',
        'domain_id': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.computer_name = kwargs.get('computer_name', str())
        self.domain_id = kwargs.get('domain_id', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.computer_name != other.computer_name:
            return False
        if self.domain_id != other.domain_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def computer_name(self):
        """Message field 'computer_name'."""
        return self._computer_name

    @computer_name.setter
    def computer_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'computer_name' field must be of type 'str'"
        self._computer_name = value

    @builtins.property
    def domain_id(self):
        """Message field 'domain_id'."""
        return self._domain_id

    @domain_id.setter
    def domain_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'domain_id' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'domain_id' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._domain_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_CheckParams_Response(type):
    """Metaclass of message 'CheckParams_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tutorial_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tutorial_interfaces.srv.CheckParams_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__check_params__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__check_params__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__check_params__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__check_params__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__check_params__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CheckParams_Response(metaclass=Metaclass_CheckParams_Response):
    """Message class 'CheckParams_Response'."""

    __slots__ = [
        '_computer_name_correct',
        '_domain_id_correct',
    ]

    _fields_and_field_types = {
        'computer_name_correct': 'boolean',
        'domain_id_correct': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.computer_name_correct = kwargs.get('computer_name_correct', bool())
        self.domain_id_correct = kwargs.get('domain_id_correct', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.computer_name_correct != other.computer_name_correct:
            return False
        if self.domain_id_correct != other.domain_id_correct:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def computer_name_correct(self):
        """Message field 'computer_name_correct'."""
        return self._computer_name_correct

    @computer_name_correct.setter
    def computer_name_correct(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'computer_name_correct' field must be of type 'bool'"
        self._computer_name_correct = value

    @builtins.property
    def domain_id_correct(self):
        """Message field 'domain_id_correct'."""
        return self._domain_id_correct

    @domain_id_correct.setter
    def domain_id_correct(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'domain_id_correct' field must be of type 'bool'"
        self._domain_id_correct = value


class Metaclass_CheckParams(type):
    """Metaclass of service 'CheckParams'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tutorial_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tutorial_interfaces.srv.CheckParams')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__check_params

            from tutorial_interfaces.srv import _check_params
            if _check_params.Metaclass_CheckParams_Request._TYPE_SUPPORT is None:
                _check_params.Metaclass_CheckParams_Request.__import_type_support__()
            if _check_params.Metaclass_CheckParams_Response._TYPE_SUPPORT is None:
                _check_params.Metaclass_CheckParams_Response.__import_type_support__()


class CheckParams(metaclass=Metaclass_CheckParams):
    from tutorial_interfaces.srv._check_params import CheckParams_Request as Request
    from tutorial_interfaces.srv._check_params import CheckParams_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
