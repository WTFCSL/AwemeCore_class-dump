//
//     Generated by private class-dump
//

@class NSDictionary, UICollectionViewCell, UIView;

@protocol IESECMallInnerFeedEvent

@property (retain, nonatomic) UIView *sender;
@property (nonatomic) unsigned long long eventType;
@property (retain, nonatomic) UICollectionViewCell *cell;
@property (copy, nonatomic) NSDictionary *userInfo;

- (void)setSender:(id)arg0;
- (id)sender;
- (unsigned long long)eventType;
- (void)setUserInfo:(id)arg0;
- (id)userInfo;
- (void)setEventType:(unsigned long long)arg0;
- (id)cell;
- (void)setCell:(id)arg0;

@end