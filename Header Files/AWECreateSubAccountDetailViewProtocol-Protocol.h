//
//     Generated by private class-dump
//

@protocol AWECreateSubAccountDetailViewDelegate;

@protocol AWECreateSubAccountDetailViewProtocol <NSObject>

@property (weak, nonatomic) id<AWECreateSubAccountDetailViewDelegate> delegate;

- (void)stopLoaingWithError:(id)arg0;
- (void)updateAvatarWith:(id)arg0;
- (void)updateWithCurrentName:(id)arg0 subName:(id)arg1 phoneNumber:(id)arg2;
- (void)handleError:(id)arg0;
- (void)startLoading;
- (id)initWithConfig:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
