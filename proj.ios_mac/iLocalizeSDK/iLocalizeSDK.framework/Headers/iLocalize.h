//
//  iLocalize.h
//  iLocalizeSDK
//
//  Created by AIHelp on 2020/7/10.
//  Copyright © 2020 AIHelp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "iLocalizeUserConfig.h"

/* callback for download string complete */
typedef void (*GGTranslationPreparedCallback)(bool success);

@interface iLocalize : NSObject

/**
 * Initialize iLocalize sdk
 *
 * When initializing iLocalize you must pass these three tokens. You initialize iLocalize by adding the following lines in the implementation file for your app delegate, ideally at the top of application:didFinishLaunchingWithOptions
 * If you want to use a test string file, refer to the initialization method below
 * @param appKey This is your developer API Key
 * @param isInternationalizing  We did accelerations for different regions.  set true for international, set false for China
 * @param language  This is the init  language
 */
+ (void)initWithAppKey:(NSString *)appKey
              language:(NSString *)language
  isInternationalizing:(BOOL)isInternationalizing;

/**
 * Initialize iLocalize sdk
 *
 * When initializing iLocalize you must pass these three tokens. You initialize iLocalize by adding the following lines in the implementation file for your app delegate, ideally at the top of application:didFinishLaunchingWithOptions
 * @param appKey This is your developer API Key
 * @param language  This is the init  language
 * @param isInternationalizing  We did accelerations for different regions.  set true for international, set false for China
 * @param isDebug  It may be useful to you during debugging. The default is false. If true, it will download the debug string file
 */
+ (void)initWithAppKey:(NSString *)appKey
              language:(NSString *)language
  isInternationalizing:(BOOL)isInternationalizing
               isDebug:(BOOL)isDebug;

/**
 * Gets the corresponding string based on the code
 *
 * The code needs to correspond to the iLocalize website one to one
 * @param code string code, it is required
 * @return The string you want, If no string is found, an empty string is returned
 */
+ (NSString *)getStringWithCode:(NSString *)code;

/**
 * Gets the corresponding string string based on the code
 *
 * The code needs to correspond to the iLocalize website one to one
 * @param code string code, it is required
 * @param defaultString The default string
 * @return The string you want, If no string is found, defaultString will be returned
 */
+ (NSString *)getStringWithCode:(NSString *)code defaultString:(NSString *)defaultString;

/**
 * Change the string language
 *
 * The call will fail in the following cases :
 * 1. If a iLocalize session is already active at the time of invocation
 * 2. Language code is incorrect
 * 3. Corresponding localization file is not found
 * @param lan the string representing the language code. For example, use 'fr' for French.
 */
+ (void)updateLanguage:(NSString *)lan;

/**
 * Register callback for download string complete
 *
 * It will tell you whether the download succeeded or failed
 * @param callBack callBack for download string complete
 */
+ (void)setTranslationPreparedCallback:(GGTranslationPreparedCallback)callBack;

/**
 * Whether to print logs.
 *
 * It only works in Debug mode
 * @param enable YES/NO
 */
+ (void)setLogEnable:(BOOL)enable;
 
+ (void)evaluateStringWithCode:(NSString *)code stringContent:(NSString *)stringContent;

+ (void)setUserConfig:(iLocalizeUserConfig *)config;

+ (void)evaluateAllStrings;

+ (void)checkStringOverflow:(iLCheckOverflowConfig *)config;

+ (void)enableEvaluateFunction:(BOOL)enable;
@end

