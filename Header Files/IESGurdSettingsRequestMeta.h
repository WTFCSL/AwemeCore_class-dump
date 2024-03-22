//
//     Generated by private class-dump
//

@class NSArray, NSDictionary;

@interface IESGurdSettingsRequestMeta : NSObject {
    BOOL _requestEnabled;
    BOOL _pollingEnabled;
    BOOL _frequenceControlEnable;
    NSArray *_accessKeysArray;
    NSArray *_requestInfosArray;
    NSDictionary *_pollingInfosDictionary;
    NSDictionary *_lazyResourceInfosDictionary;
}

@property (nonatomic, getter=isRequestEnabled) BOOL requestEnabled;
@property (nonatomic, getter=isPollingEnabled) BOOL pollingEnabled;
@property (nonatomic, getter=isFrequenceControlEnable) BOOL frequenceControlEnable;
@property (copy, nonatomic) NSArray *accessKeysArray;
@property (copy, nonatomic) NSArray *requestInfosArray;
@property (copy, nonatomic) NSDictionary *pollingInfosDictionary;
@property (copy, nonatomic) NSDictionary *lazyResourceInfosDictionary;

+ (id)metaWithDictionary:(id)arg0;

- (BOOL)isRequestEnabled;
- (id)accessKeysArray;
- (id)requestInfosArray;
- (id)pollingInfosDictionary;
- (BOOL)isPollingEnabled;
- (void)setPollingEnabled:(BOOL)arg0;
- (BOOL)isFrequenceControlEnable;
- (void)setRequestInfosArray:(id)arg0;
- (id)lazyResourceInfosDictionary;
- (void)setAccessKeysArray:(id)arg0;
- (void)setRequestEnabled:(BOOL)arg0;
- (void)setFrequenceControlEnable:(BOOL)arg0;
- (void)setPollingInfosDictionary:(id)arg0;
- (void)setLazyResourceInfosDictionary:(id)arg0;
- (void).cxx_destruct;

@end
