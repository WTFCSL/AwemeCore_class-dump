//
//     Generated by private class-dump
//

@protocol IESLiveInteractFanTicketDelegate;

@interface IESLiveBaseFanTicketStore : NSObject {
    BOOL _guestCanAcceptGift;
    id<IESLiveInteractFanTicketDelegate> _delegate;
}

@property (weak, nonatomic) id<IESLiveInteractFanTicketDelegate> delegate;
@property (nonatomic) BOOL guestCanAcceptGift;

- (id)initWithDelegete:(id)arg0 DIContext:(id)arg1;
- (BOOL)guestCanAcceptGift;
- (void)setGuestCanAcceptGift:(BOOL)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
