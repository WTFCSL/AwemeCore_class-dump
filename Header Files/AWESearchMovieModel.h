//
//     Generated by private class-dump
//

@class NSString;

@interface AWESearchMovieModel : AWEBaseApiModel {
    BOOL _isMediumAnchor;
    NSString *_movieTitle;
    NSString *_coverURL;
    long long _releaseType;
    NSString *_castDesc;
    NSString *_movieTypeDesc;
    NSString *_releaseDesc;
    NSString *_movieScore;
    long long _wantToSeeCount;
    NSString *_hashtagID;
    NSString *_buyTicketURL;
    NSString *_schema;
    NSString *_cid;
}

@property (copy, nonatomic) NSString *movieTitle;
@property (copy, nonatomic) NSString *coverURL;
@property (nonatomic) long long releaseType;
@property (copy, nonatomic) NSString *castDesc;
@property (copy, nonatomic) NSString *movieTypeDesc;
@property (copy, nonatomic) NSString *releaseDesc;
@property (copy, nonatomic) NSString *movieScore;
@property (nonatomic) long long wantToSeeCount;
@property (copy, nonatomic) NSString *hashtagID;
@property (copy, nonatomic) NSString *buyTicketURL;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL isMediumAnchor;
@property (copy, nonatomic) NSString *cid;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isMediumAnchor;
- (void)setIsMediumAnchor:(BOOL)arg0;
- (id)movieTitle;
- (void)setMovieTitle:(id)arg0;
- (id)castDesc;
- (void)setCastDesc:(id)arg0;
- (id)movieTypeDesc;
- (void)setMovieTypeDesc:(id)arg0;
- (id)releaseDesc;
- (void)setReleaseDesc:(id)arg0;
- (id)movieScore;
- (void)setMovieScore:(id)arg0;
- (long long)wantToSeeCount;
- (void)setWantToSeeCount:(long long)arg0;
- (id)hashtagID;
- (void)setHashtagID:(id)arg0;
- (id)buyTicketURL;
- (void)setBuyTicketURL:(id)arg0;
- (void)setSchema:(id)arg0;
- (void)setReleaseType:(long long)arg0;
- (void).cxx_destruct;
- (long long)releaseType;
- (id)cid;
- (id)schema;
- (void)setCid:(id)arg0;
- (id)coverURL;
- (void)setCoverURL:(id)arg0;

@end
