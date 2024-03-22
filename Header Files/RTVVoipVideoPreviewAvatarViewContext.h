//
//     Generated by private class-dump
//

@class RTVVoipParticipator;

@interface RTVVoipVideoPreviewAvatarViewContext : NSObject {
    BOOL _simpleAppearance;
    RTVVoipParticipator *_participator;
    id /* block */ _nickNameShouldShow;
}

@property (readonly, nonatomic) RTVVoipParticipator *participator;
@property (readonly, nonatomic) BOOL simpleAppearance;
@property (readonly, copy, nonatomic) id /* block */ nickNameShouldShow;

- (id)participator;
- (id)initWithParticipator:(id)arg0;
- (id /* block */)nickNameShouldShow;
- (BOOL)simpleAppearance;
- (id)initWithParticipator:(id)arg0 simpleAppearance:(BOOL)arg1;
- (id)initWithParticipator:(id)arg0 simpleAppearance:(BOOL)arg1 nickNameShouldShow:(id /* block */)arg2;
- (void).cxx_destruct;

@end
