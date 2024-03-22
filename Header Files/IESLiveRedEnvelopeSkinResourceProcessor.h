//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface IESLiveRedEnvelopeSkinResourceProcessor : NSObject <IESLiveDressResourceProcessor> {
    NSMutableDictionary *_resources;
}

@property (retain, nonatomic) NSMutableDictionary *resources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canProcessWithDressType:(int)arg0;
- (void)prefetchDressResource:(id)arg0 completion:(id /* block */)arg1;
- (id)dressResourceFromDress:(id)arg0 error:(id *)arg1;
- (id)init;
- (id)resources;
- (void).cxx_destruct;
- (void)setResources:(id)arg0;

@end
