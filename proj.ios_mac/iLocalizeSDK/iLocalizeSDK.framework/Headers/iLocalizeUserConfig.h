//
//  iLocalizeUserConfig.h
//  iLocalizeSDK
//
//  Created by AIHelp on 2020/9/27.
//  Copyright © 2020 AIHelp. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface iLocalizeUserConfig : NSObject
@property (nonatomic, copy,readonly)NSString  *userTags;
- (id) init NS_UNAVAILABLE;

@end

@interface iLocalizeUserConfigBuilder : NSObject
@property (nonatomic, copy)NSString  *userTags;
- (iLocalizeUserConfig *)build;

@end

NS_ASSUME_NONNULL_END
