//
//     Generated by private class-dump
//

@class NSString, NSAttributedString, NSArray;

@interface IESLiveAnchorMultiLinkParticipationItemList : NSObject {
    int _sectionType;
    NSString *_sectionName;
    NSAttributedString *_sectionNameAttr;
    NSArray *_list;
    long long _followItemCount;
}

@property (copy, nonatomic) NSString *sectionName;
@property (copy, nonatomic) NSAttributedString *sectionNameAttr;
@property (nonatomic) int sectionType;
@property (copy, nonatomic) NSArray *list;
@property (nonatomic) long long followItemCount;

- (id)sectionNameAttr;
- (void)setSectionNameAttr:(id)arg0;
- (long long)followItemCount;
- (void)setFollowItemCount:(long long)arg0;
- (void).cxx_destruct;
- (void)setSectionType:(int)arg0;
- (int)sectionType;
- (id)list;
- (void)setList:(id)arg0;
- (id)sectionName;
- (void)setSectionName:(id)arg0;

@end
