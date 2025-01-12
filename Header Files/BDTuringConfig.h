//
//     Generated by private class-dump
//

@class NSString, BDTuringVerifyModel;
@protocol BDTuringConfigDelegate, BDTuringLoginDelegate;

@interface BDTuringConfig : NSObject {
    NSString *_appID;
    NSString *_channel;
    NSString *_host;
    NSString *_url;
    NSString *_appName;
    NSString *_appKey;
    long long _regionType;
    NSString *_language;
    NSString *_locale;
    id<BDTuringConfigDelegate> _delegate;
    id<BDTuringLoginDelegate> _handler;
    BDTuringVerifyModel *_model;
}

@property (weak, nonatomic) BDTuringVerifyModel *model;
@property (weak, nonatomic) BDTuringVerifyModel *model;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appKey;
@property (nonatomic) long long regionType;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *locale;
@property (weak, nonatomic) id<BDTuringConfigDelegate> delegate;
@property (weak, nonatomic) id<BDTuringLoginDelegate> handler;

+ (void)loadHostCN;
+ (void)initialize;

- (id)commonParameters;
- (void)setAppKey:(id)arg0;
- (id)appKey;
- (id)sealWebURLQueryParameters;
- (id)sealRequestQueryParameters;
- (id)commonWebURLQueryParameters;
- (id)stringFromDelegateSelector:(SEL)arg0;
- (id)turingWebURLQueryParameters;
- (id)twiceVerifyRequestQueryParameters;
- (id)requestPostParameters;
- (void)setAppName:(id)arg0;
- (id)appName;
- (void)setModel:(id)arg0;
- (id)channel;
- (id)init;
- (void)setAppID:(id)arg0;
- (void)setHost:(id)arg0;
- (void).cxx_destruct;
- (void)setChannel:(id)arg0;
- (id)model;
- (id)language;
- (void)setUrl:(id)arg0;
- (void)setLocale:(id)arg0;
- (id)locale;
- (id)host;
- (void)setHandler:(id)arg0;
- (id)delegate;
- (id)appID;
- (void)setLanguage:(id)arg0;
- (id)handler;
- (void)setDelegate:(id)arg0;
- (id)url;
- (long long)regionType;
- (id)eventParameters;
- (void)setRegionType:(long long)arg0;
- (id)requestQueryParameters;

@end
