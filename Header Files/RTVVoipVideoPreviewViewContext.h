//
//     Generated by private class-dump
//

@class RTVVoipParticipator;

@interface RTVVoipVideoPreviewViewContext : NSObject {
    BOOL _isInLastRow;
    BOOL _isApparent;
    BOOL _shouldShowAvatarWhenApparentAndDisplayVideo;
    RTVVoipParticipator *_participator;
    id /* block */ _nickNameShouldShow;
}

@property (nonatomic) BOOL isInLastRow;
@property (readonly, nonatomic) RTVVoipParticipator *participator;
@property (readonly, nonatomic) BOOL isApparent;
@property (nonatomic) BOOL shouldShowAvatarWhenApparentAndDisplayVideo;
@property (readonly, copy, nonatomic) id /* block */ nickNameShouldShow;

- (id)participator;
- (id)initWithParticipator:(id)arg0;
- (id /* block */)nickNameShouldShow;
- (BOOL)shouldShowAvatarWhenApparentAndDisplayVideo;
- (id)initWithParticipator:(id)arg0 inLastRow:(BOOL)arg1 apparent:(BOOL)arg2 nickNameShouldShow:(id /* block */)arg3;
- (void)setShouldShowAvatarWhenApparentAndDisplayVideo:(BOOL)arg0;
- (id)initWithParticipator:(id)arg0 nickNameShouldShow:(id /* block */)arg1;
- (BOOL)isApparent;
- (BOOL)isInLastRow;
- (void)updateInLastRow:(BOOL)arg0;
- (id)initWithParticipator:(id)arg0 inLastRow:(BOOL)arg1 apparent:(BOOL)arg2;
- (void)setIsInLastRow:(BOOL)arg0;
- (void).cxx_destruct;

@end
