//
//     Generated by private class-dump
//

@class AWEAnimatedButton;
@protocol AWEUserRelationViewDelegate;

@protocol AWEUserRelationView <NSObject>

@property (retain, nonatomic) AWEAnimatedButton *relationTitleBtn;
@property (readonly, nonatomic) long long followStatus;
@property (weak, nonatomic) id<AWEUserRelationViewDelegate> delegate;

- (long long)followStatus;
- (id)relationTitleBtn;
- (void)setRelationTitleBtn:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
