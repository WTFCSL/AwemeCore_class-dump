//
//     Generated by private class-dump
//

@class AWEFeedChannelTopBarBadgeModel, AWEFCTopBarEntranceModel, UIView;

@interface AWEFCTopBarEntranceStage : NSObject <NSCopying> {
    long long _type;
    AWEFCTopBarEntranceModel *_entrance;
    UIView *_entranceView;
    AWEFeedChannelTopBarBadgeModel *_badge;
    struct CGSize { double width; double height; } _entranceSize;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) AWEFCTopBarEntranceModel *entrance;
@property (retain, nonatomic) UIView *entranceView;
@property (nonatomic) struct CGSize { double width; double height; } entranceSize;
@property (copy, nonatomic) AWEFeedChannelTopBarBadgeModel *badge;

- (void)setEntrance:(id)arg0;
- (id)entrance;
- (id)entranceView;
- (void)setEntranceView:(id)arg0;
- (void)setEntranceSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })entranceSize;
- (id)init;
- (void).cxx_destruct;
- (void)setBadge:(id)arg0;
- (id)badge;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (long long)type;
- (void)setType:(long long)arg0;
- (id)description;

@end