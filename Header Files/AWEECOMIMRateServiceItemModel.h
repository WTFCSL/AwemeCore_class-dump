//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEECOMIMRateServiceItemModel : NSObject {
    BOOL _realSelected;
    NSString *_starsName;
    NSString *_iconName;
    NSString *_iconNameSelected;
    NSString *_iconNameUnSelected;
    NSString *_stars;
    NSArray *_tagTitleList;
    long long _itemState;
    long long _type;
}

@property (copy, nonatomic) NSString *starsName;
@property (copy, nonatomic) NSString *iconName;
@property (copy, nonatomic) NSString *iconNameSelected;
@property (copy, nonatomic) NSString *iconNameUnSelected;
@property (copy, nonatomic) NSString *stars;
@property (copy, nonatomic) NSArray *tagTitleList;
@property (nonatomic) long long itemState;
@property (nonatomic) BOOL realSelected;
@property (nonatomic) long long type;

- (void)setStars:(id)arg0;
- (void)setRealSelected:(BOOL)arg0;
- (void)setTagTitleList:(id)arg0;
- (id)tagTitleList;
- (void)setStarsName:(id)arg0;
- (void)setIconNameSelected:(id)arg0;
- (void)setIconNameUnSelected:(id)arg0;
- (id)starsName;
- (id)iconNameSelected;
- (id)iconNameUnSelected;
- (BOOL)realSelected;
- (void).cxx_destruct;
- (id)stars;
- (long long)type;
- (void)setType:(long long)arg0;
- (id)iconName;
- (void)setItemState:(long long)arg0;
- (long long)itemState;
- (void)setIconName:(id)arg0;

@end
