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
@property (nonatomic, assign,readonly)CGFloat noPaddingWidth;
@property (nonatomic, assign,readonly)CGFloat noPaddingHeight;
@property (nonatomic, copy,readonly)NSString  *fontAssetPath;
@property (nonatomic, copy,readonly)NSString  *fontName;
@property (nonatomic, assign,readonly)CGFloat  fontSize;
@property (nonatomic, assign,readonly)CGFloat  letterSpacing;
@property (nonatomic, assign,readonly)CGFloat  lineSpacing;
@property (nonatomic, assign,readonly)BOOL  isBold;
@property (nonatomic, assign,readonly)BOOL  isItalic;
- (id) init NS_UNAVAILABLE;

@end

@interface iLCheckOverflowConfigBuilder : NSObject
@property (nonatomic, copy)NSString  *pageId;
@property (nonatomic, copy)NSString  *stringId;
@property (nonatomic, copy)NSString  *stringRealContent;
@property (nonatomic, assign)CGFloat noPaddingWidth;
@property (nonatomic, assign)CGFloat noPaddingHeight;
@property (nonatomic, copy)NSString  *fontAssetPath;
@property (nonatomic, copy)NSString  *fontName;
@property (nonatomic, assign)CGFloat  fontSize;
@property (nonatomic, assign)CGFloat  letterSpacing;
@property (nonatomic, assign)CGFloat  lineSpacing;
@property (nonatomic, assign)BOOL  isBold;
@property (nonatomic, assign)BOOL  isItalic;
- (iLCheckOverflowConfig *)build;

@end





NS_ASSUME_NONNULL_END
