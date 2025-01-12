//
//     Generated by private class-dump
//

@class NSArray, NSAttributedString, NSString;

@interface IESLivePKInviteeListItemSection : NSObject {
    BOOL _showTips;
    BOOL _showFilterButton;
    BOOL _needHiddenSectionHeaderView;
    int _sectionType;
    int _recommendStatus;
    long long _sectionNumber;
    NSAttributedString *_sectionName;
    NSArray *_list;
    NSString *_filterTips;
}

@property (nonatomic) long long sectionNumber;
@property (copy, nonatomic) NSAttributedString *sectionName;
@property (nonatomic) int sectionType;
@property (nonatomic) int recommendStatus;
@property (copy, nonatomic) NSArray *list;
@property (nonatomic) BOOL showTips;
@property (copy, nonatomic) NSString *filterTips;
@property (nonatomic) BOOL showFilterButton;
@property (nonatomic) BOOL needHiddenSectionHeaderView;

- (int)recommendStatus;
- (void)setRecommendStatus:(int)arg0;
- (BOOL)showTips;
- (void)setShowTips:(BOOL)arg0;
- (BOOL)showFilterButton;
- (id)filterTips;
- (void)setFilterTips:(id)arg0;
- (void)setShowFilterButton:(BOOL)arg0;
- (BOOL)needHiddenSectionHeaderView;
- (void)setNeedHiddenSectionHeaderView:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setSectionType:(int)arg0;
- (int)sectionType;
- (id)list;
- (void)setList:(id)arg0;
- (id)sectionName;
- (void)setSectionName:(id)arg0;
- (long long)sectionNumber;
- (void)setSectionNumber:(long long)arg0;

@end
