//
//     Generated by private class-dump
//

@class NSString;

@interface AWENovelWelfareChapterCommentModel : NSObject {
    NSString *_title;
    NSString *_avatar;
    NSString *_name;
    NSString *_desc;
    NSString *_content;
    long long _score;
    NSString *_commentId;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *avatar;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long score;
@property (copy, nonatomic) NSString *commentId;

- (void)setCommentId:(id)arg0;
- (id)commentId;
- (id)desc;
- (void)setScore:(long long)arg0;
- (long long)score;
- (void).cxx_destruct;
- (id)content;
- (id)initWithDict:(id)arg0;
- (id)title;
- (void)setContent:(id)arg0;
- (void)setName:(id)arg0;
- (void)setDesc:(id)arg0;
- (id)name;
- (void)setTitle:(id)arg0;
- (id)avatar;
- (void)setAvatar:(id)arg0;

@end