//
//     Generated by private class-dump
//

@class NSString, AWECommentUserGuideAlertModel;

@interface AWECommentUserGuideTipsModel : AWEBaseApiModel {
    BOOL _hasIcon;
    unsigned long long _position;
    NSString *_content;
    NSString *_jumpText;
    NSString *_jumpURL;
    NSString *_lightIconURL;
    NSString *_darkIconURL;
    AWECommentUserGuideAlertModel *_alertModel;
    id /* block */ _jumpBlock;
    NSString *_scene;
    double _cellHeight;
    long long _freqDay;
    long long _freqNum;
    NSString *_storageKey;
}

@property (nonatomic) unsigned long long position;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *jumpText;
@property (copy, nonatomic) NSString *jumpURL;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *lightIconURL;
@property (copy, nonatomic) NSString *darkIconURL;
@property (retain, nonatomic) AWECommentUserGuideAlertModel *alertModel;
@property (copy, nonatomic) id /* block */ jumpBlock;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) double cellHeight;
@property (nonatomic) long long freqDay;
@property (nonatomic) long long freqNum;
@property (copy, nonatomic) NSString *storageKey;

+ (id)alertModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)jumpText;
- (id)darkIconURL;
- (id)lightIconURL;
- (void)setJumpText:(id)arg0;
- (void)setJumpURL:(id)arg0;
- (id)jumpURL;
- (id /* block */)jumpBlock;
- (long long)freqDay;
- (long long)freqNum;
- (void)setJumpBlock:(id /* block */)arg0;
- (id)alertModel;
- (void)setAlertModel:(id)arg0;
- (void)setLightIconURL:(id)arg0;
- (void)setDarkIconURL:(id)arg0;
- (void)setFreqDay:(long long)arg0;
- (void)setFreqNum:(long long)arg0;
- (id)storageKey;
- (void)setStorageKey:(id)arg0;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)position;
- (void)setPosition:(unsigned long long)arg0;
- (id)content;
- (void)setContent:(id)arg0;
- (id)scene;
- (BOOL)hasIcon;
- (double)cellHeight;
- (void)setCellHeight:(double)arg0;
- (void)setHasIcon:(BOOL)arg0;

@end
