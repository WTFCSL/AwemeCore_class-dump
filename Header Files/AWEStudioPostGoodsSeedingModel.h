//
//     Generated by private class-dump
//

@class NSString;

@interface AWEStudioPostGoodsSeedingModel : NSObject <NSCopying> {
    NSString *_seedID;
    NSString *_draftID;
    NSString *_title;
    NSString *_views;
    NSString *_tag;
    NSString *_referSeedID;
    NSString *_referSeedName;
}

@property (retain, nonatomic) NSString *seedID;
@property (retain, nonatomic) NSString *draftID;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *views;
@property (retain, nonatomic) NSString *tag;
@property (retain, nonatomic) NSString *referSeedID;
@property (retain, nonatomic) NSString *referSeedName;

- (id)draftID;
- (void)setDraftID:(id)arg0;
- (id)seedID;
- (void)setSeedID:(id)arg0;
- (id)referSeedID;
- (void)setReferSeedID:(id)arg0;
- (id)referSeedName;
- (void)setReferSeedName:(id)arg0;
- (id)views;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setTag:(id)arg0;
- (id)tag;
- (id)title;
- (void)setTitle:(id)arg0;
- (void)setViews:(id)arg0;

@end
