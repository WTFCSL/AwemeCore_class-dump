//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSArray;

@interface BDARVTrackerModel : NSObject {
    NSString *_ad_id;
    NSString *_log_extra;
    NSString *_tag;
    NSString *_label;
    NSString *_refer;
    NSString *_type;
    NSDictionary *_adExtra;
    NSDictionary *_extraDict;
    NSArray *_trackURLs;
}

@property (copy, nonatomic) NSString *ad_id;
@property (copy, nonatomic) NSString *log_extra;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDictionary *adExtra;
@property (copy, nonatomic) NSDictionary *extraDict;
@property (copy, nonatomic) NSArray *trackURLs;

- (void)setRefer:(id)arg0;
- (void)setExtraDict:(id)arg0;
- (id)extraDict;
- (void)setAd_id:(id)arg0;
- (id)ad_id;
- (id)log_extra;
- (void)setLog_extra:(id)arg0;
- (id)refer;
- (id)adExtra;
- (void)setAdExtra:(id)arg0;
- (void)setTrackURLs:(id)arg0;
- (id)initWithADID:(id)arg0 logExtra:(id)arg1;
- (id)trackURLs;
- (void).cxx_destruct;
- (id)type;
- (void)setLabel:(id)arg0;
- (void)setTag:(id)arg0;
- (id)tag;
- (void)setType:(id)arg0;
- (id)label;

@end
