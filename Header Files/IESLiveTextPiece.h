//
//     Generated by private class-dump
//

@class IESLiveTextPieceString, IESLiveTextPieceImage;

@interface IESLiveTextPiece : IESLivePBBaseMessage

@property (nonatomic) int type;
@property (nonatomic) int alignment;
@property (retain, nonatomic) IESLiveTextPieceString *stringValue;
@property (nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) IESLiveTextPieceImage *imageValue;
@property (nonatomic) BOOL hasImageValue;

+ (id)descriptor;

@end
