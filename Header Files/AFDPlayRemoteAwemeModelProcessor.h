//
//     Generated by private class-dump
//

@class NSString;

@interface AFDPlayRemoteAwemeModelProcessor : NSObject <AFDPlayRemoteAwemeModelProcessorProtocol> {
    BOOL _supportRichAweme;
}

@property (nonatomic) BOOL supportRichAweme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)transferAwemeListIfNeededWithArray:(id)arg0;
- (id)transferAwemeModelForLive:(id)arg0;
- (void)setSupportRichAweme:(BOOL)arg0;
- (BOOL)supportRichAweme;

@end