//
//  HTMMenuSearchRequest.h
//  IndoorMapFramework
//
//  Created by LongMa on 2019/9/29.
//  Copyright © 2019 huatu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
NS_ASSUME_NONNULL_BEGIN


/// 根据当前位置获取对应app版本的城市菜单，支持返回多个页面的菜单
@interface HTMMenuSearchRequest : NSObject

/// 经纬度
@property(nonatomic, assign) CLLocationCoordinate2D coor2D;

//app版本,如"wheelchair"
@property(nonatomic, copy) NSString *version;
@end

NS_ASSUME_NONNULL_END
