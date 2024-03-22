//
//     Generated by private class-dump
//

@protocol IESLiveURLSchemaHandlerAdapter;

@interface IESLiveGiftImageItem : HTSLiveGiftItem {
    id<IESLiveURLSchemaHandlerAdapter> _schemaURLHandler;
}

@property (retain, nonatomic) id<IESLiveURLSchemaHandlerAdapter> schemaURLHandler;

+ (id)itemFromModel:(id)arg0 attachingDIContext:(id)arg1;

- (id)schemaURLHandler;
- (void)setSchemaURLHandler:(id)arg0;
- (BOOL)canCombo;
- (void)selectFailed;
- (unsigned long long)selectFailedType;
- (void).cxx_destruct;
- (BOOL)canGroup;
- (BOOL)canSelect;

@end