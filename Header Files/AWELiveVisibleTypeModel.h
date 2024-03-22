//
//     Generated by private class-dump
//

@class NSString;

@interface AWELiveVisibleTypeModel : NSObject {
    BOOL _noDeeperEntry;
    BOOL _selected;
    BOOL _editable;
    int _visibilityRangeType;
    NSString *_iconName;
    NSString *_title;
    NSString *_subTitle;
    unsigned long long _type;
    unsigned long long _representVisibilityRangeType;
}

@property (retain, nonatomic) NSString *iconName;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL noDeeperEntry;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL editable;
@property (nonatomic) unsigned long long representVisibilityRangeType;
@property (nonatomic) int visibilityRangeType;

- (BOOL)noDeeperEntry;
- (unsigned long long)representVisibilityRangeType;
- (int)visibilityRangeType;
- (void)setNoDeeperEntry:(BOOL)arg0;
- (void)setRepresentVisibilityRangeType:(unsigned long long)arg0;
- (void)setVisibilityRangeType:(int)arg0;
- (BOOL)selected;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)title;
- (void)setType:(unsigned long long)arg0;
- (void)setSelected:(BOOL)arg0;
- (id)iconName;
- (void)setSubTitle:(id)arg0;
- (void)setIconName:(id)arg0;
- (id)subTitle;
- (void)setTitle:(id)arg0;
- (void)setEditable:(BOOL)arg0;
- (BOOL)editable;

@end
