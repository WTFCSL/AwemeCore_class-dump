//
//     Generated by private class-dump
//

@class NSString, NSArray;

@protocol ACCTaskModelProtocol <NSObject, NSCopying>

@property (copy, nonatomic) NSString *ID;
@property (copy, nonatomic) NSArray *challengs;
@property (copy, nonatomic) NSArray *usersShouldBeMentioned;
@property (nonatomic) BOOL isLiveRecord;
@property (copy, nonatomic) NSString *stickerText;
@property (copy, nonatomic) NSArray *musics;

- (id)stickerText;
- (void)setStickerText:(id)arg0;
- (id)challengs;
- (BOOL)isLiveRecord;
- (id)musics;
- (void)setMusics:(id)arg0;
- (void)setChallengs:(id)arg0;
- (id)usersShouldBeMentioned;
- (void)setUsersShouldBeMentioned:(id)arg0;
- (void)setIsLiveRecord:(BOOL)arg0;
- (id)ID;
- (void)setID:(id)arg0;

@end