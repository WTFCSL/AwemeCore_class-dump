//
//     Generated by private class-dump
//

@protocol IESLiveBaseFanTicketStore <NSObject>

@property (nonatomic) BOOL guestCanAcceptGift;

- (BOOL)guestCanAcceptGift;
- (void)setGuestCanAcceptGift:(BOOL)arg0;
- (void)bizStoreMount;
- (void)bizStoreDidUpdatedGuestList:(id)arg0;

@optional

- (void)bizStoreDidChangedFromLayout:(id)arg0 toLayout:(id)arg1;
- (void)bizStoreDidChangeGuestCanAcceptGift:(BOOL)arg0;
- (void)bizStoreDidLivePause:(BOOL)arg0;

@end
