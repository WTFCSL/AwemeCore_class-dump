//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEMusicSongListSelectSectionModel : NSObject {
    BOOL _hasMore;
    NSString *_title;
    NSArray *_cellModels;
}

@property (retain, nonatomic) NSArray *cellModels;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL hasMore;

- (id)cellModels;
- (void)setCellModels:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setTitle:(id)arg0;

@end
