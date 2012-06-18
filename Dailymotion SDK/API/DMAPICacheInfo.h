//
//  DMAPICacheInfo.h
//  Dailymotion SDK iOS
//
//  Created by Olivier Poitrey on 14/06/12.
//
//

#import <Foundation/Foundation.h>

@interface DMAPICacheInfo : NSObject

/**
 * The date when the cache info as been issued
 */
@property (nonatomic, readonly) NSDate *date;

/**
 * The cache namespace used for invalidation
 */
@property (nonatomic, readonly) NSString *namespace;

/**
 * The optinal namespaces invalidated by this cache entry
 */
@property (nonatomic, readonly) NSArray *invalidates;

/**
 * The entity tag for the returned object that may be used to perform conditional API requests
 */
@property (nonatomic, readonly) NSString *etag;

/**
 * Tell if the entity is public or private. Private entries must be removed from the cache
 * when API session change
 */
@property (nonatomic, readonly) BOOL public;

/**
 * The maximum age of the cached data before it become stalled
 */
@property (nonatomic, readonly) NSTimeInterval maxAge;

/**
 * Tells if the cached data is currently stalled
 *
 * This parameter is by default dynamic but can be forced to YES by setting it. Setting
 * the parameter to NO won't force the value but reset the automatic handling of this property.
 */
@property (nonatomic, assign) BOOL stalled;

- (id)initWithCacheInfo:(NSDictionary *)cacheInfo;

@end
