//
//  MKNetworkKit.h
//  MKNetworkKit
//
//  Created by Mugunth Kumar on 7/11/11.
//  Copyright (c) 2011 Steinlogic. All rights reserved.
//

#ifndef MKNetworkKit_MKNetworkKit_h
#define MKNetworkKit_MKNetworkKit_h

#import <Foundation/Foundation.h>
#import "MKNetworkEngine.h"
#import "MKNetworkOperation.h"
#import "Reachability.h"

#ifdef DEBUG
#   define DLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
#   define DLog(...)
#endif

// ALog always displays output regardless of the DEBUG setting
#define ALog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);

#define MKNETWORKCACHE_DEFAULT_COST 50
#define MKNETWORKCACHE_DEFAULT_DIRECTORY @"MKNetworkCache"
#endif