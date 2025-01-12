//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWETeenExtraParamModel, AWEAwemeModel;

@interface AWETeenPlayInteractionContext : AWEPageContext {
    AWEAwemeModel *_model;
    NSString *_albumEnterFrom;
    long long _vcType;
    double _leftContainerWidth;
    AWETeenExtraParamModel *_extraParam;
    NSString *_referString;
    NSDictionary *_logExtraDict;
    NSString *_enterFrom;
    NSString *_enterMethod;
    NSDictionary *_trackContext;
}

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *albumEnterFrom;
@property (nonatomic) long long vcType;
@property (nonatomic) double leftContainerWidth;
@property (retain, nonatomic) AWETeenExtraParamModel *extraParam;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSDictionary *trackContext;

- (id)referString;
- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (void)setReferString:(id)arg0;
- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)enterFrom;
- (void)setVcType:(long long)arg0;
- (id)extraParam;
- (void)setExtraParam:(id)arg0;
- (double)leftContainerWidth;
- (void)setLeftContainerWidth:(double)arg0;
- (long long)vcType;
- (id)albumEnterFrom;
- (void)setAlbumEnterFrom:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;

@end
