//
//     Generated by private class-dump
//

@class AWENewPublishChapterTableViewCell;

@interface AWEPostPageChapterElement : AWEPostPageCellElement {
    AWENewPublishChapterTableViewCell *_chapterCell;
}

@property (retain, nonatomic) AWENewPublishChapterTableViewCell *chapterCell;

+ (void)_aweLazyRegisterPostPage;
+ (Class)aAWEStudioChapterAdapterClass;

- (id)aAWEStudioChapterAdapter;
- (BOOL)isAlbumVideo;
- (id)chapterCell;
- (void)showChapterTrack;
- (void)showChapterEditPage;
- (void)setChapterCell:(id)arg0;
- (void).cxx_destruct;
- (id)type;
- (BOOL)isEnabled;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (id)service;
- (BOOL)isVisible;
- (id)cell;
- (void)didSelect;

@end