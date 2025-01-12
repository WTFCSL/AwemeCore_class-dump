//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEPostPageAnchorViewModel : NSObject {
    long long _businessType;
    NSString *_title;
    NSString *_ID;
    NSString *_tagTitle;
    NSString *_anchorContent;
    NSArray *_iconList;
    NSString *_iconImageName;
    unsigned long long _action;
}

@property (nonatomic) long long businessType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *ID;
@property (copy, nonatomic) NSString *tagTitle;
@property (copy, nonatomic) NSString *anchorContent;
@property (copy, nonatomic) NSArray *iconList;
@property (copy, nonatomic) NSString *iconImageName;
@property (nonatomic) unsigned long long action;

+ (id)anchorVMWithStudioAnchor:(id)arg0;

- (id)tagTitle;
- (void)setBusinessType:(long long)arg0;
- (id)iconList;
- (void)setIconList:(id)arg0;
- (id)anchorContent;
- (void)setAnchorContent:(id)arg0;
- (void)setTagTitle:(id)arg0;
- (long long)businessType;
- (id)ID;
- (void)setID:(id)arg0;
- (void).cxx_destruct;
- (id)iconImageName;
- (id)title;
- (void)setAction:(unsigned long long)arg0;
- (unsigned long long)action;
- (void)setIconImageName:(id)arg0;
- (void)setTitle:(id)arg0;

@end
