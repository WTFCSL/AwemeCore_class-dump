//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;
@protocol IESLiveIMDecoder, IESLiveIMFilter;

@interface IESLiveIMPayloadDecoder : NSObject <IESLiveIMDecoder> {
    BOOL _logEnabled;
    id<IESLiveIMFilter> _filter;
    NSMutableDictionary *_methods;
}

@property (retain, nonatomic) NSMutableDictionary *methods;
@property (retain, nonatomic) id<IESLiveIMFilter> filter;
@property (nonatomic) BOOL logEnabled;
@property (retain, nonatomic) id<IESLiveIMDecoder> nextDecoder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)arg0 params:(id)arg1;
- (void)logEvent:(id)arg0 params:(id)arg1;
- (void)setLogEnabled:(BOOL)arg0;
- (id)parsePBMessages:(id)arg0 toExtra:(id)arg1;
- (void)decode:(id)arg0 completion:(id /* block */)arg1;
- (id)transformValue:(id)arg0 withExtra:(id)arg1;
- (void)registerMethod:(id)arg0 withPBClass:(Class)arg1;
- (void)unregisterMethod:(id)arg0;
- (void)setFilter:(id)arg0;
- (id)init;
- (id)filter;
- (void).cxx_destruct;
- (id)methods;
- (void)setMethods:(id)arg0;
- (BOOL)logEnabled;

@end