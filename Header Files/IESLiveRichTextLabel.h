//
//     Generated by private class-dump
//

@class NSArray, NSMutableArray, NSString;

@interface IESLiveRichTextLabel : UILabel {
    BOOL _enableAnimatedImage;
    BOOL _hasAnimatedPiece;
    id /* block */ _textUpdateBlock;
    NSArray *_currentPieces;
    NSMutableArray *_completePieces;
    NSString *_currentTag;
    id /* block */ _completion;
}

@property (retain, nonatomic) NSArray *currentPieces;
@property (nonatomic) BOOL enableAnimatedImage;
@property (nonatomic) BOOL hasAnimatedPiece;
@property (retain, nonatomic) NSMutableArray *completePieces;
@property (retain, nonatomic) NSString *currentTag;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ textUpdateBlock;

- (void)setPieces:(id)arg0;
- (void)setTextUpdateBlock:(id /* block */)arg0;
- (id /* block */)textUpdateBlock;
- (BOOL)enableAnimatedImage;
- (BOOL)hasAnimatedPiece;
- (void)setPieces:(id)arg0 completion:(id /* block */)arg1;
- (id)completePieces;
- (void)setHasAnimatedPiece:(BOOL)arg0;
- (void)updatePiecesWithDownloadImage:(BOOL)arg0 tag:(id)arg1;
- (BOOL)isAllPiecesLoaded;
- (id)currentPieces;
- (id)imageFromCache:(id)arg0;
- (void)downloadImage:(id)arg0 isAnimated:(BOOL)arg1 tag:(id)arg2;
- (id)attachmentFromAnimatedImage:(id)arg0 liveImage:(id)arg1 font:(id)arg2;
- (id)attachmentFromImage:(id)arg0 liveImage:(id)arg1 font:(id)arg2;
- (void)updateRichTextWithImage:(id)arg0 isAnimated:(BOOL)arg1 tag:(id)arg2;
- (void)setCurrentPieces:(id)arg0;
- (void)setEnableAnimatedImage:(BOOL)arg0;
- (void)setCompletePieces:(id)arg0;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (void)setAttributedText:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)currentTag;
- (void)setCurrentTag:(id)arg0;

@end