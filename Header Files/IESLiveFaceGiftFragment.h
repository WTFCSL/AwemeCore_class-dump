//
//     Generated by private class-dump
//

@class NSString, IESLiveFaceGiftStore;

@interface IESLiveFaceGiftFragment : IESLiveRoomComponent <IESLiveFaceGiftRouter> {
    IESLiveFaceGiftStore *_store;
}

@property (retain, nonatomic) IESLiveFaceGiftStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)playFaceGiftWithSticker:(id)arg0;
- (BOOL)ablePlayFaceGiftWithModel:(id)arg0 giftMsg:(id)arg1;
- (void).cxx_destruct;
- (id)store;
- (void)setStore:(id)arg0;

@end
