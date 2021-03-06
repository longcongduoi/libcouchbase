/* -*- Mode: C; tab-width: 4; c-basic-offset: 4; indent-tabs-mode: nil -*- */
/*
 *     Copyright 2011 Couchbase, Inc.
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 */

/**
 * This file contains the implementation of the method(s) needed to
 * convert an error constant to a textual representation.
 *
 * @author Trond Norbye
 * @todo Localize the function..
 */

#include "internal.h"

LIBCOUCHBASE_API
const char *lcb_strerror(lcb_t instance, lcb_error_t error)
{
    (void)instance;
    switch (error) {
    case LCB_SUCCESS:
        return "Success";
    case LCB_KEY_ENOENT:
        return "No such key";
    case LCB_E2BIG:
        return "Object too big";
    case LCB_ENOMEM:
        return "Out of memory";
    case LCB_KEY_EEXISTS:
        return "Key exists (with a different CAS value)";
    case LCB_EINVAL:
        return "Invalid arguments";
    case LCB_NOT_STORED:
        return "Not stored";
    case LCB_DELTA_BADVAL:
        return "Not a number";
    case LCB_NOT_MY_VBUCKET:
        return "The vbucket is not located on this server";
    case LCB_AUTH_ERROR:
        return "Authentication error";
    case LCB_AUTH_CONTINUE:
        return "Continue authentication";
    case LCB_ERANGE:
        return "Invalid range";
    case LCB_UNKNOWN_COMMAND:
        return "Unknown command";
    case LCB_NOT_SUPPORTED:
        return "Not supported";
    case LCB_EINTERNAL:
        return "Internal error";
    case LCB_EBUSY:
        return "Too busy. Try again later";
    case LCB_ETMPFAIL:
        return "Temporary failure. Try again later";
    case LCB_DLOPEN_FAILED:
        return "Failed to open shared object";
    case LCB_DLSYM_FAILED:
        return "Failed to locate the requested symbol in the shared object";
    case LCB_NETWORK_ERROR:
        return "Network error";
    case LCB_UNKNOWN_HOST:
        return "Unknown host";
    case LCB_ERROR:
        return "Generic error";
    case LCB_PROTOCOL_ERROR:
        return "Protocol error";
    case LCB_ETIMEDOUT:
        return "Operation timed out";
    case LCB_CONNECT_ERROR:
        return "Connection failure";
    case LCB_BUCKET_ENOENT:
        return "No such bucket";
    case LCB_CLIENT_ENOMEM:
        return "Out of memory on the client";
    case LCB_CLIENT_ETMPFAIL:
        return "Temporary failure on the client. Try again later";
    case LCB_EBADHANDLE:
        return "Invalid handle type. The requested operation isn't allowed for given type.";
    default:
        return "Unknown error.. are you sure libcouchbase gave you that?";
    }
}
