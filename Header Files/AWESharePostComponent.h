//
//     Generated by private class-dump
//

@class AWEPlayInteractionBaseElement, AWESharePostTagView, NSString;

@interface AWESharePostComponent : NSObject <AFDVideoTagsProtocol> {
    AWEPlayInteractionBaseElement *clickDelegate;
    AWESharePostTagView *_sharePostTagView;
}

@property (retain, nonatomic) AWESharePostTagView *sharePostTagView;
@property (weak, nonatomic) AWEPlayInteractionBaseElement *clickDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)clickDelegate;
- (void)setClickDelegate:(id)arg0;
- (long long)tagWidth;
- (BOOL)needShowWithModel:(id)arg0;
- (id)sharePostTagView;
- (void)setSharePostTagView:(id)arg0;
- (void).cxx_destruct;
- (void)updateWithModel:(id)arg0;
- (id)tagView;

@end