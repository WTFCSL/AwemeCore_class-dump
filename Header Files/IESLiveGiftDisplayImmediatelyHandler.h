//
//     Generated by private class-dump
//

@class NSArray, NSString;
@protocol IESLiveGiftDisplayHandlerProtocol;

@interface IESLiveGiftDisplayImmediatelyHandler : NSObject <IESLiveGiftDisplayHandlerProtocol> {
    id<IESLiveGiftDisplayHandlerProtocol> nextHandler;
    NSArray *_bannedGiftTypes;
    NSArray *_bannedAssetTypes;
}

@property (retain, nonatomic) NSArray *bannedGiftTypes;
@property (retain, nonatomic) NSArray *bannedAssetTypes;
@property (retain, nonatomic) id<IESLiveGiftDisplayHandlerProtocol> nextHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableDisplayWithGift:(id)arg0 context:(id)arg1;
- (id)nextHandler;
- (void)setNextHandler:(id)arg0;
- (BOOL)acrossAssetCheckWithGift:(id)arg0;
- (BOOL)acrossImmediatelyShowWithGift:(id)arg0;
- (id)bannedGiftTypes;
- (id)bannedAssetTypes;
- (void)setBannedGiftTypes:(id)arg0;
- (void)setBannedAssetTypes:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
