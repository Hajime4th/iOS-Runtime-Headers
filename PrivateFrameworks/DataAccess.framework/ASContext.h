/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableDictionary, NSString;

@interface ASContext : NSObject {
    NSString *_cachedPassword;
    NSMutableDictionary *_configuration;
    id _delegate;
    BOOL _haveLookedUpPassword;
    NSMutableDictionary *_hostsToTrust;
}

@property(readonly) NSString *accountID;
@property(readonly) NSDictionary *configuration;
@property(copy) NSString *emailAddress;
@property(copy) NSString *host;
@property(copy) NSString *password;
@property(readonly) NSString *tag;
@property(copy) NSString *username;
@property(copy) NSString *version;
@property BOOL allowAnyRootCert;
@property id delegate;
@property NSInteger mailNumberOfPastDaysToSync;
@property NSInteger port;
@property BOOL useSSL;

+ (void)clearAllRootCertSettingsForAccountWithID:(id)arg1;

- (id)_hostsToTrust;
- (id)accountID;
- (BOOL)allowAnyRootCert;
- (NSInteger)allowAnyRootCertFromHost:(id)arg1;
- (void)clearAllRootCertSettings;
- (id)configuration;
- (void)dealloc;
- (id)delegate;
- (id)emailAddress;
- (id)host;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (NSInteger)mailNumberOfPastDaysToSync;
- (id)password;
- (NSInteger)port;
- (void)saveAccountSettings;
- (void)setAllowAnyRootCert:(BOOL)arg1 fromHost:(id)arg2;
- (void)setAllowAnyRootCert:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setMailNumberOfPastDaysToSync:(NSInteger)arg1;
- (void)setPassword:(id)arg1;
- (void)setPort:(NSInteger)arg1;
- (void)setUseSSL:(BOOL)arg1;
- (void)setUsername:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)tag;
- (BOOL)useSSL;
- (id)username;
- (id)version;

@end