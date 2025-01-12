//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWEMusicMatchedSongModel : AWEBaseApiModel <AWEMusicMatchedSongModelProtocol> {
    NSString *_songID;
    NSString *_author;
    NSString *_title;
    NSString *_h5URL;
    AWEURLModel *_coverMediumURL;
    NSString *_dspName;
    NSString *_sourceID;
    NSString *_fullClipID;
}

@property (copy, nonatomic) NSString *h5URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *songID;
@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *h5URL;
@property (copy, nonatomic) AWEURLModel *coverMediumURL;
@property (copy, nonatomic) NSString *dspName;
@property (copy, nonatomic) NSString *sourceID;
@property (copy, nonatomic) NSString *fullClipID;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setSongID:(id)arg0;
- (id)dspName;
- (id)copyrightFlag;
- (id)h5URL;
- (void)setH5URL:(id)arg0;
- (id)coverMediumURL;
- (void)setCoverMediumURL:(id)arg0;
- (void)setDspName:(id)arg0;
- (id)fullClipID;
- (void)setFullClipID:(id)arg0;
- (id)sourceID;
- (void).cxx_destruct;
- (id)title;
- (id)author;
- (void)setAuthor:(id)arg0;
- (void)setSourceID:(id)arg0;
- (void)setTitle:(id)arg0;
- (id)songID;

@end
