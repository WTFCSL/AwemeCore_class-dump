//
//     Generated by private class-dump
//

@class NSString, AWENewURLModel;

@interface AWEMusicMatchedPGCSoundModel : AWEBaseDataModel {
    long long _clipId;
    NSString *_author;
    NSString *_title;
    NSString *_mixedTitle;
    NSString *_mixedAuthor;
    AWENewURLModel *_coverMediumModel;
}

@property (nonatomic) long long clipId;
@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *mixedTitle;
@property (copy, nonatomic) NSString *mixedAuthor;
@property (retain, nonatomic) AWENewURLModel *coverMediumModel;

+ (id)JSONKeyPathsByPropertyKey;

- (id)mixedAuthor;
- (id)mixedTitle;
- (long long)clipId;
- (void)setClipId:(long long)arg0;
- (void)setMixedTitle:(id)arg0;
- (void)setMixedAuthor:(id)arg0;
- (id)coverMediumModel;
- (void)setCoverMediumModel:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (id)author;
- (void)setAuthor:(id)arg0;
- (void)setTitle:(id)arg0;

@end
