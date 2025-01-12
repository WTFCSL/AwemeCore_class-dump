//
//     Generated by private class-dump
//

@class NSNumber, NSArray, NSString;

@interface AWELiveSoloKTVPublishConfigImpl : NSObject <AWEStudioSoloKTVPublishConfig> {
    NSNumber *songId;
    NSArray *publishTags;
    NSString *publishContent;
    NSNumber *anchorId;
    NSString *anchorTitle;
    NSString *anchorTag;
    NSString *anchorContent;
    NSString *anchorIconURL;
    NSString *enterSource;
}

@property (retain, nonatomic) NSNumber *songId;
@property (copy, nonatomic) NSArray *publishTags;
@property (copy, nonatomic) NSString *publishContent;
@property (retain, nonatomic) NSNumber *anchorId;
@property (copy, nonatomic) NSString *anchorTitle;
@property (copy, nonatomic) NSString *anchorTag;
@property (copy, nonatomic) NSString *anchorContent;
@property (copy, nonatomic) NSString *anchorIconURL;
@property (copy, nonatomic) NSString *enterSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterSource:(id)arg0;
- (id)enterSource;
- (id)songId;
- (id)anchorId;
- (void)setAnchorId:(id)arg0;
- (id)anchorContent;
- (void)setAnchorContent:(id)arg0;
- (void)setSongId:(id)arg0;
- (id)anchorTag;
- (id)anchorTitle;
- (void)setAnchorTag:(id)arg0;
- (void)setAnchorTitle:(id)arg0;
- (id)publishTags;
- (void)setPublishTags:(id)arg0;
- (id)publishContent;
- (void)setPublishContent:(id)arg0;
- (id)anchorIconURL;
- (void)setAnchorIconURL:(id)arg0;
- (void).cxx_destruct;

@end
