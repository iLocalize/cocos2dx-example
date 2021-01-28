//
//  iLocalizeUserConfig.h
//  iLocalizeSDK
//
//  Created by AIHelp on 2020/9/27.
//  Copyright © 2020 AIHelp. All rights reserved.
//

#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface iLocalizeUserConfig : NSObject
@property (nonatomic, copy,readonly)NSString  *userTags;
@property (nonatomic, copy,readonly)NSString  *userId;
- (id) init NS_UNAVAILABLE;

@end

@interface iLocalizeUserConfigBuilder : NSObject
@property (nonatomic, copy)NSString  *userTags;
@property (nonatomic, copy)NSString  *userId;
- (iLocalizeUserConfig *)build;

@end


@interface iLCheckOverflowConfig : NSObject
@property (nonatomic, copy,readonly)NSString  *pageId;
@property (nonatomic, copy,readonly)NSString  *stringId;
@property (nonatomic, copy,readonly)NSString  *stringRealContent;
@property (nonatomic, assign,readonly)CGFloat designWidth;
@property (nonatomic, assign,readonly)CGFloat designHeight;
@property (nonatomic, assign,readonly)CGFloat measuredWidth;
@property (nonatomic, assign,readonly)CGFloat measuredHeight;


@property (nonatomic, copy,readonly)NSString  *fontFamily;
@property (nonatomic, assign,readonly)CGFloat  fontSize;
@property (nonatomic, assign,readonly)CGFloat  lineSpacing;
@property (nonatomic, assign,readonly)NSInteger textAlign;
@property (nonatomic, assign,readonly)BOOL isBold;
@property (nonatomic, assign,readonly)BOOL isItalic;
@property (nonatomic, assign,readonly)BOOL isMultipleLine;// 多行

- (id) init NS_UNAVAILABLE;

@end

@interface iLCheckOverflowConfigBuilder : NSObject
@property (nonatomic, copy)NSString  *pageId;
@property (nonatomic, copy)NSString  *stringId;
@property (nonatomic, copy)NSString  *stringRealContent;
@property (nonatomic, assign)CGFloat designWidth;
@property (nonatomic, assign)CGFloat designHeight;
@property (nonatomic, assign)CGFloat measuredWidth;
@property (nonatomic, assign)CGFloat measuredHeight;

@property (nonatomic, copy)NSString  *fontFamily;
@property (nonatomic, assign)CGFloat  fontSize;
@property (nonatomic, assign)CGFloat  lineSpacing;
@property (nonatomic, assign)NSInteger textAlign;
@property (nonatomic, assign)BOOL isBold;
@property (nonatomic, assign)BOOL isItalic;
@property (nonatomic, assign)BOOL isMultipleLine;// 多行
- (iLCheckOverflowConfig *)build;

@end





NS_ASSUME_NONNULL_END
