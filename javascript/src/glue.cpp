
#include <emscripten.h>

extern "C" {

// Not using size_t for array indices as the values used by the javascript code are signed.
void array_bounds_check(const int array_size, const int array_idx) {
  if (array_idx < 0 || array_idx >= array_size) {
    EM_ASM({
      throw 'Array index ' + $0 + ' out of bounds: [0,' + $1 + ')';
    }, array_idx, array_size);
  }
}

// ParagraphJustification

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ParagraphJustification___destroy___0(ParagraphJustification* self) {
  delete self;
}

// BoolPtr

void EMSCRIPTEN_KEEPALIVE emscripten_bind_BoolPtr___destroy___0(BoolPtr* self) {
  delete self;
}

// LongStarPtr

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LongStarPtr___destroy___0(LongStarPtr* self) {
  delete self;
}

// VoidPtr

void EMSCRIPTEN_KEEPALIVE emscripten_bind_VoidPtr___destroy___0(void** self) {
  delete self;
}

// ResultIterator

ResultIterator* EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_ResultIterator_1(const ResultIterator* arg0) {
  return new ResultIterator(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_Begin_0(ResultIterator* self) {
  self->Begin();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_RestartParagraph_0(ResultIterator* self) {
  self->RestartParagraph();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_IsWithinFirstTextlineOfParagraph_0(ResultIterator* self) {
  return self->IsWithinFirstTextlineOfParagraph();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_RestartRow_0(ResultIterator* self) {
  self->RestartRow();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_Next_1(ResultIterator* self, PageIteratorLevel arg0) {
  return self->Next(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_IsAtBeginningOf_1(ResultIterator* self, PageIteratorLevel arg0) {
  return self->IsAtBeginningOf(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_IsAtFinalElement_2(ResultIterator* self, PageIteratorLevel arg0, PageIteratorLevel arg1) {
  return self->IsAtFinalElement(arg0, arg1);
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_Cmp_1(ResultIterator* self, const PageIterator* arg0) {
  return self->Cmp(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_SetBoundingBoxComponents_2(ResultIterator* self, bool arg0, bool arg1) {
  self->SetBoundingBoxComponents(arg0, arg1);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_BoundingBox_5(ResultIterator* self, PageIteratorLevel arg0, IntPtr* arg1, IntPtr* arg2, IntPtr* arg3, IntPtr* arg4) {
  return self->BoundingBox(arg0, arg1, arg2, arg3, arg4);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_BoundingBox_6(ResultIterator* self, PageIteratorLevel arg0, const int arg1, IntPtr* arg2, IntPtr* arg3, IntPtr* arg4, IntPtr* arg5) {
  return self->BoundingBox(arg0, arg1, arg2, arg3, arg4, arg5);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_BoundingBoxInternal_5(ResultIterator* self, PageIteratorLevel arg0, IntPtr* arg1, IntPtr* arg2, IntPtr* arg3, IntPtr* arg4) {
  return self->BoundingBoxInternal(arg0, arg1, arg2, arg3, arg4);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_Empty_1(ResultIterator* self, PageIteratorLevel arg0) {
  return self->Empty(arg0);
}

PolyBlockType EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_BlockType_0(ResultIterator* self) {
  return self->BlockType();
}

Pta* EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_BlockPolygon_0(ResultIterator* self) {
  return self->BlockPolygon();
}

Pix* EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_GetBinaryImage_1(ResultIterator* self, PageIteratorLevel arg0) {
  return self->GetBinaryImage(arg0);
}

Pix* EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_GetImage_5(ResultIterator* self, PageIteratorLevel arg0, int arg1, Pix* arg2, IntPtr* arg3, IntPtr* arg4) {
  return self->GetImage(arg0, arg1, arg2, arg3, arg4);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_Baseline_5(ResultIterator* self, PageIteratorLevel arg0, IntPtr* arg1, IntPtr* arg2, IntPtr* arg3, IntPtr* arg4) {
  return self->Baseline(arg0, arg1, arg2, arg3, arg4);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_Orientation_4(ResultIterator* self, Orientation* arg0, WritingDirection* arg1, TextlineOrder* arg2, FloatPtr* arg3) {
  self->Orientation(arg0, arg1, arg2, arg3);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_ParagraphInfo_4(ResultIterator* self, ParagraphJustification* arg0, BoolPtr* arg1, BoolPtr* arg2, IntPtr* arg3) {
  self->ParagraphInfo(arg0, arg1, arg2, arg3);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_ParagraphIsLtr_0(ResultIterator* self) {
  return self->ParagraphIsLtr();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_GetUTF8Text_1(ResultIterator* self, PageIteratorLevel arg0) {
  return self->GetUTF8Text(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_SetLineSeparator_1(ResultIterator* self, const char* arg0) {
  self->SetLineSeparator(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_SetParagraphSeparator_1(ResultIterator* self, const char* arg0) {
  self->SetParagraphSeparator(arg0);
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_Confidence_1(ResultIterator* self, PageIteratorLevel arg0) {
  return self->Confidence(arg0);
}

const char* EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_WordFontAttributes_8(ResultIterator* self, BoolPtr* arg0, BoolPtr* arg1, BoolPtr* arg2, BoolPtr* arg3, BoolPtr* arg4, BoolPtr* arg5, IntPtr* arg6, IntPtr* arg7) {
  return self->WordFontAttributes(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

const char* EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_WordRecognitionLanguage_0(ResultIterator* self) {
  return self->WordRecognitionLanguage();
}

StrongScriptDirection EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_WordDirection_0(ResultIterator* self) {
  return self->WordDirection();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_WordIsFromDictionary_0(ResultIterator* self) {
  return self->WordIsFromDictionary();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_WordIsNumeric_0(ResultIterator* self) {
  return self->WordIsNumeric();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_HasBlamerInfo_0(ResultIterator* self) {
  return self->HasBlamerInfo();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_HasTruthString_0(ResultIterator* self) {
  return self->HasTruthString();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_EquivalentToTruth_1(ResultIterator* self, const char* arg0) {
  return self->EquivalentToTruth(arg0);
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_WordTruthUTF8Text_0(ResultIterator* self) {
  return self->WordTruthUTF8Text();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_WordNormedUTF8Text_0(ResultIterator* self) {
  return self->WordNormedUTF8Text();
}

const char* EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_WordLattice_1(ResultIterator* self, IntPtr* arg0) {
  return self->WordLattice(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_SymbolIsSuperscript_0(ResultIterator* self) {
  return self->SymbolIsSuperscript();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_SymbolIsSubscript_0(ResultIterator* self) {
  return self->SymbolIsSubscript();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator_SymbolIsDropcap_0(ResultIterator* self) {
  return self->SymbolIsDropcap();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ResultIterator___destroy___0(ResultIterator* self) {
  delete self;
}

// TextlineOrder

void EMSCRIPTEN_KEEPALIVE emscripten_bind_TextlineOrder___destroy___0(TextlineOrder* self) {
  delete self;
}

// ETEXT_DESC

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ETEXT_DESC___destroy___0(ETEXT_DESC* self) {
  delete self;
}

// PageIterator

void EMSCRIPTEN_KEEPALIVE emscripten_bind_PageIterator_Begin_0(PageIterator* self) {
  self->Begin();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_PageIterator_RestartParagraph_0(PageIterator* self) {
  self->RestartParagraph();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_PageIterator_IsWithinFirstTextlineOfParagraph_0(PageIterator* self) {
  return self->IsWithinFirstTextlineOfParagraph();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_PageIterator_RestartRow_0(PageIterator* self) {
  self->RestartRow();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_PageIterator_Next_1(PageIterator* self, PageIteratorLevel arg0) {
  return self->Next(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_PageIterator_IsAtBeginningOf_1(PageIterator* self, PageIteratorLevel arg0) {
  return self->IsAtBeginningOf(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_PageIterator_IsAtFinalElement_2(PageIterator* self, PageIteratorLevel arg0, PageIteratorLevel arg1) {
  return self->IsAtFinalElement(arg0, arg1);
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_PageIterator_Cmp_1(PageIterator* self, const PageIterator* arg0) {
  return self->Cmp(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_PageIterator_SetBoundingBoxComponents_2(PageIterator* self, bool arg0, bool arg1) {
  self->SetBoundingBoxComponents(arg0, arg1);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_PageIterator_BoundingBox_5(PageIterator* self, PageIteratorLevel arg0, IntPtr* arg1, IntPtr* arg2, IntPtr* arg3, IntPtr* arg4) {
  return self->BoundingBox(arg0, arg1, arg2, arg3, arg4);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_PageIterator_BoundingBox_6(PageIterator* self, PageIteratorLevel arg0, const int arg1, IntPtr* arg2, IntPtr* arg3, IntPtr* arg4, IntPtr* arg5) {
  return self->BoundingBox(arg0, arg1, arg2, arg3, arg4, arg5);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_PageIterator_BoundingBoxInternal_5(PageIterator* self, PageIteratorLevel arg0, IntPtr* arg1, IntPtr* arg2, IntPtr* arg3, IntPtr* arg4) {
  return self->BoundingBoxInternal(arg0, arg1, arg2, arg3, arg4);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_PageIterator_Empty_1(PageIterator* self, PageIteratorLevel arg0) {
  return self->Empty(arg0);
}

PolyBlockType EMSCRIPTEN_KEEPALIVE emscripten_bind_PageIterator_BlockType_0(PageIterator* self) {
  return self->BlockType();
}

Pta* EMSCRIPTEN_KEEPALIVE emscripten_bind_PageIterator_BlockPolygon_0(PageIterator* self) {
  return self->BlockPolygon();
}

Pix* EMSCRIPTEN_KEEPALIVE emscripten_bind_PageIterator_GetBinaryImage_1(PageIterator* self, PageIteratorLevel arg0) {
  return self->GetBinaryImage(arg0);
}

Pix* EMSCRIPTEN_KEEPALIVE emscripten_bind_PageIterator_GetImage_5(PageIterator* self, PageIteratorLevel arg0, int arg1, Pix* arg2, IntPtr* arg3, IntPtr* arg4) {
  return self->GetImage(arg0, arg1, arg2, arg3, arg4);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_PageIterator_Baseline_5(PageIterator* self, PageIteratorLevel arg0, IntPtr* arg1, IntPtr* arg2, IntPtr* arg3, IntPtr* arg4) {
  return self->Baseline(arg0, arg1, arg2, arg3, arg4);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_PageIterator_Orientation_4(PageIterator* self, Orientation* arg0, WritingDirection* arg1, TextlineOrder* arg2, FloatPtr* arg3) {
  self->Orientation(arg0, arg1, arg2, arg3);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_PageIterator_ParagraphInfo_4(PageIterator* self, ParagraphJustification* arg0, BoolPtr* arg1, BoolPtr* arg2, IntPtr* arg3) {
  self->ParagraphInfo(arg0, arg1, arg2, arg3);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_PageIterator___destroy___0(PageIterator* self) {
  delete self;
}

// WritingDirection

void EMSCRIPTEN_KEEPALIVE emscripten_bind_WritingDirection___destroy___0(WritingDirection* self) {
  delete self;
}

// BoxPtr

void EMSCRIPTEN_KEEPALIVE emscripten_bind_BoxPtr___destroy___0(BoxPtr* self) {
  delete self;
}

// Box

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Box_get_x_0(Box* self) {
  return self->x;
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Box_get_y_0(Box* self) {
  return self->y;
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Box_get_w_0(Box* self) {
  return self->w;
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Box_get_h_0(Box* self) {
  return self->h;
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Box_get_refcount_0(Box* self) {
  return self->refcount;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Box___destroy___0(Box* self) {
  delete self;
}

// PixaPtr

void EMSCRIPTEN_KEEPALIVE emscripten_bind_PixaPtr___destroy___0(PixaPtr* self) {
  delete self;
}

// WordChoiceIterator

WordChoiceIterator* EMSCRIPTEN_KEEPALIVE emscripten_bind_WordChoiceIterator_WordChoiceIterator_1(const ResultIterator* arg0) {
  return new WordChoiceIterator(*arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_WordChoiceIterator_Next_0(WordChoiceIterator* self) {
  return self->Next();
}

const char* EMSCRIPTEN_KEEPALIVE emscripten_bind_WordChoiceIterator_GetUTF8Text_0(WordChoiceIterator* self) {
  return self->GetUTF8Text();
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_WordChoiceIterator_Confidence_0(WordChoiceIterator* self) {
  return self->Confidence();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_WordChoiceIterator___destroy___0(WordChoiceIterator* self) {
  delete self;
}

// FloatPtr

void EMSCRIPTEN_KEEPALIVE emscripten_bind_FloatPtr___destroy___0(FloatPtr* self) {
  delete self;
}

// ChoiceIterator

ChoiceIterator* EMSCRIPTEN_KEEPALIVE emscripten_bind_ChoiceIterator_ChoiceIterator_1(const ResultIterator* arg0) {
  return new ChoiceIterator(*arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_ChoiceIterator_Next_0(ChoiceIterator* self) {
  return self->Next();
}

const char* EMSCRIPTEN_KEEPALIVE emscripten_bind_ChoiceIterator_GetUTF8Text_0(ChoiceIterator* self) {
  return self->GetUTF8Text();
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_ChoiceIterator_Confidence_0(ChoiceIterator* self) {
  return self->Confidence();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ChoiceIterator___destroy___0(ChoiceIterator* self) {
  delete self;
}

// PixPtr

void EMSCRIPTEN_KEEPALIVE emscripten_bind_PixPtr___destroy___0(PixPtr* self) {
  delete self;
}

// UNICHARSET

const char* EMSCRIPTEN_KEEPALIVE emscripten_bind_UNICHARSET_get_script_from_script_id_1(UNICHARSET* self, int arg0) {
  return self->get_script_from_script_id(arg0);
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_UNICHARSET_get_script_id_from_name_1(UNICHARSET* self, const char* arg0) {
  return self->get_script_id_from_name(arg0);
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_UNICHARSET_get_script_table_size_0(UNICHARSET* self) {
  return self->get_script_table_size();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_UNICHARSET___destroy___0(UNICHARSET* self) {
  delete self;
}

// IntPtr

void EMSCRIPTEN_KEEPALIVE emscripten_bind_IntPtr___destroy___0(IntPtr* self) {
  delete self;
}

// Orientation

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Orientation___destroy___0(Orientation* self) {
  delete self;
}

// OSBestResult

int EMSCRIPTEN_KEEPALIVE emscripten_bind_OSBestResult_get_orientation_id_0(OSBestResult* self) {
  return self->orientation_id;
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_OSBestResult_get_script_id_0(OSBestResult* self) {
  return self->script_id;
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_OSBestResult_get_sconfidence_0(OSBestResult* self) {
  return self->sconfidence;
}

float EMSCRIPTEN_KEEPALIVE emscripten_bind_OSBestResult_get_oconfidence_0(OSBestResult* self) {
  return self->oconfidence;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_OSBestResult___destroy___0(OSBestResult* self) {
  delete self;
}

// Boxa

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Boxa_get_n_0(Boxa* self) {
  return self->n;
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Boxa_get_nalloc_0(Boxa* self) {
  return self->nalloc;
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Boxa_get_refcount_0(Boxa* self) {
  return self->refcount;
}

BoxPtr* EMSCRIPTEN_KEEPALIVE emscripten_bind_Boxa_get_box_0(Boxa* self) {
  return self->box;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Boxa___destroy___0(Boxa* self) {
  delete self;
}

// PixColormap

void* EMSCRIPTEN_KEEPALIVE emscripten_bind_PixColormap_get_array_0(PixColormap* self) {
  return self->array;
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_PixColormap_get_depth_0(PixColormap* self) {
  return self->depth;
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_PixColormap_get_nalloc_0(PixColormap* self) {
  return self->nalloc;
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_PixColormap_get_n_0(PixColormap* self) {
  return self->n;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_PixColormap___destroy___0(PixColormap* self) {
  delete self;
}

// Pta

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Pta_get_n_0(Pta* self) {
  return self->n;
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Pta_get_nalloc_0(Pta* self) {
  return self->nalloc;
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Pta_get_refcount_0(Pta* self) {
  return self->refcount;
}

FloatPtr* EMSCRIPTEN_KEEPALIVE emscripten_bind_Pta_get_x_0(Pta* self) {
  return self->x;
}

FloatPtr* EMSCRIPTEN_KEEPALIVE emscripten_bind_Pta_get_y_0(Pta* self) {
  return self->y;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Pta___destroy___0(Pta* self) {
  delete self;
}

// Pix

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Pix_get_w_0(Pix* self) {
  return self->w;
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Pix_get_h_0(Pix* self) {
  return self->h;
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Pix_get_d_0(Pix* self) {
  return self->d;
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Pix_get_spp_0(Pix* self) {
  return self->spp;
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Pix_get_wpl_0(Pix* self) {
  return self->wpl;
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Pix_get_refcount_0(Pix* self) {
  return self->refcount;
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Pix_get_xres_0(Pix* self) {
  return self->xres;
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Pix_get_yres_0(Pix* self) {
  return self->yres;
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Pix_get_informat_0(Pix* self) {
  return self->informat;
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Pix_get_special_0(Pix* self) {
  return self->special;
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_Pix_get_text_0(Pix* self) {
  return self->text;
}

PixColormap* EMSCRIPTEN_KEEPALIVE emscripten_bind_Pix_get_colormap_0(Pix* self) {
  return self->colormap;
}

Uint32Array EMSCRIPTEN_KEEPALIVE emscripten_bind_Pix_get_data_0(Pix* self) {
  return self->data;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Pix___destroy___0(Pix* self) {
  delete self;
}

// DoublePtr

void EMSCRIPTEN_KEEPALIVE emscripten_bind_DoublePtr___destroy___0(DoublePtr* self) {
  delete self;
}

// Dawg

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Dawg___destroy___0(Dawg* self) {
  delete self;
}

// TessBaseAPI

TessBaseAPI* EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_TessBaseAPI_0() {
  return new TessBaseAPI();
}

const char* EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_Version_0(TessBaseAPI* self) {
  return self->Version();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_CatchSignals_0(TessBaseAPI* self) {
  self->CatchSignals();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_SetInputName_1(TessBaseAPI* self, const char* arg0) {
  self->SetInputName(arg0);
}

const char* EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_GetInputName_0(TessBaseAPI* self) {
  return self->GetInputName();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_SetInputImage_1(TessBaseAPI* self, Pix* arg0) {
  self->SetInputImage(arg0);
}

Pix* EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_GetInputImage_0(TessBaseAPI* self) {
  return self->GetInputImage();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_GetSourceYResolution_0(TessBaseAPI* self) {
  return self->GetSourceYResolution();
}

const char* EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_GetDatapath_0(TessBaseAPI* self) {
  return self->GetDatapath();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_SetOutputName_1(TessBaseAPI* self, const char* arg0) {
  self->SetOutputName(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_SetVariable_2(TessBaseAPI* self, const char* arg0, const char* arg1) {
  return self->SetVariable(arg0, arg1);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_SetDebugVariable_2(TessBaseAPI* self, const char* arg0, const char* arg1) {
  return self->SetDebugVariable(arg0, arg1);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_GetIntVariable_2(TessBaseAPI* self, const char* arg0, IntPtr* arg1) {
  return self->GetIntVariable(arg0, arg1);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_GetBoolVariable_2(TessBaseAPI* self, const char* arg0, BoolPtr* arg1) {
  return self->GetBoolVariable(arg0, arg1);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_GetDoubleVariable_2(TessBaseAPI* self, const char* arg0, DoublePtr* arg1) {
  return self->GetDoubleVariable(arg0, arg1);
}

const char* EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_GetStringVariable_1(TessBaseAPI* self, const char* arg0) {
  return self->GetStringVariable(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_PrintVariables_0(TessBaseAPI* self) {
  self->PrintVariables();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_Init_2(TessBaseAPI* self, const char* arg0, const char* arg1) {
  return self->Init(arg0, arg1);
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_Init_3(TessBaseAPI* self, const char* arg0, const char* arg1, OcrEngineMode arg2) {
  return self->Init(arg0, arg1, arg2);
}

const char* EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_GetInitLanguagesAsString_0(TessBaseAPI* self) {
  return self->GetInitLanguagesAsString();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_InitLangMod_2(TessBaseAPI* self, const char* arg0, const char* arg1) {
  return self->InitLangMod(arg0, arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_InitForAnalysePage_0(TessBaseAPI* self) {
  self->InitForAnalysePage();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_ReadConfigFile_1(TessBaseAPI* self, const char* arg0) {
  self->ReadConfigFile(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_ReadDebugConfigFile_1(TessBaseAPI* self, const char* arg0) {
  self->ReadDebugConfigFile(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_SetPageSegMode_1(TessBaseAPI* self, PageSegMode arg0) {
  self->SetPageSegMode(arg0);
}

PageSegMode EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_GetPageSegMode_0(TessBaseAPI* self) {
  return self->GetPageSegMode();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_TesseractRect_7(TessBaseAPI* self, const Uint8Array arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
  return self->TesseractRect(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_ClearAdaptiveClassifier_0(TessBaseAPI* self) {
  self->ClearAdaptiveClassifier();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_SetImage_1(TessBaseAPI* self, Pix* arg0) {
  self->SetImage(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_SetImage_5(TessBaseAPI* self, const Uint8Array arg0, int arg1, int arg2, int arg3, int arg4) {
  self->SetImage(arg0, arg1, arg2, arg3, arg4);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_SetSourceResolution_1(TessBaseAPI* self, int arg0) {
  self->SetSourceResolution(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_SetRectangle_4(TessBaseAPI* self, int arg0, int arg1, int arg2, int arg3) {
  self->SetRectangle(arg0, arg1, arg2, arg3);
}

Pix* EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_GetThresholdedImage_0(TessBaseAPI* self) {
  return self->GetThresholdedImage();
}

Boxa* EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_GetRegions_1(TessBaseAPI* self, PixaPtr* arg0) {
  return self->GetRegions(arg0);
}

Boxa* EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_GetTextlines_2(TessBaseAPI* self, PixaPtr* arg0, LongStarPtr* arg1) {
  return self->GetTextlines(arg0, arg1);
}

Boxa* EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_GetTextlines_5(TessBaseAPI* self, const bool arg0, const int arg1, PixaPtr* arg2, LongStarPtr* arg3, LongStarPtr* arg4) {
  return self->GetTextlines(arg0, arg1, arg2, arg3, arg4);
}

Boxa* EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_GetStrips_2(TessBaseAPI* self, PixaPtr* arg0, LongStarPtr* arg1) {
  return self->GetStrips(arg0, arg1);
}

Boxa* EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_GetWords_1(TessBaseAPI* self, PixaPtr* arg0) {
  return self->GetWords(arg0);
}

Boxa* EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_GetConnectedComponents_1(TessBaseAPI* self, PixaPtr* arg0) {
  return self->GetConnectedComponents(arg0);
}

Boxa* EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_GetComponentImages_4(TessBaseAPI* self, const PageIteratorLevel arg0, const bool arg1, PixaPtr* arg2, LongStarPtr* arg3) {
  return self->GetComponentImages(arg0, arg1, arg2, arg3);
}

Boxa* EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_GetComponentImages_7(TessBaseAPI* self, const PageIteratorLevel arg0, const bool arg1, const bool arg2, const int arg3, PixaPtr* arg4, LongStarPtr* arg5, LongStarPtr* arg6) {
  return self->GetComponentImages(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_GetThresholdedImageScaleFactor_0(TessBaseAPI* self) {
  return self->GetThresholdedImageScaleFactor();
}

PageIterator* EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_AnalyseLayout_0(TessBaseAPI* self) {
  return self->AnalyseLayout();
}

PageIterator* EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_AnalyseLayout_1(TessBaseAPI* self, bool arg0) {
  return self->AnalyseLayout(arg0);
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_Recognize_1(TessBaseAPI* self, ETEXT_DESC* arg0) {
  return self->Recognize(arg0);
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_RecognizeForChopTest_1(TessBaseAPI* self, ETEXT_DESC* arg0) {
  return self->RecognizeForChopTest(arg0);
}

ResultIterator* EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_GetIterator_0(TessBaseAPI* self) {
  return self->GetIterator();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_GetUTF8Text_0(TessBaseAPI* self) {
  return self->GetUTF8Text();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_GetHOCRText_1(TessBaseAPI* self, int arg0) {
  return self->GetHOCRText(arg0);
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_GetTSVText_1(TessBaseAPI* self, int arg0) {
  return self->GetTSVText(arg0);
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_GetBoxText_1(TessBaseAPI* self, int arg0) {
  return self->GetBoxText(arg0);
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_GetUNLVText_0(TessBaseAPI* self) {
  return self->GetUNLVText();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_GetOsdText_1(TessBaseAPI* self, int arg0) {
  return self->GetOsdText(arg0);
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_MeanTextConf_0(TessBaseAPI* self) {
  return self->MeanTextConf();
}

IntPtr* EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_AllWordConfidences_0(TessBaseAPI* self) {
  return self->AllWordConfidences();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_AdaptToWordStr_2(TessBaseAPI* self, PageSegMode arg0, const char* arg1) {
  return self->AdaptToWordStr(arg0, arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_Clear_0(TessBaseAPI* self) {
  self->Clear();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_End_0(TessBaseAPI* self) {
  self->End();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_ClearPersistentCache_0(TessBaseAPI* self) {
  self->ClearPersistentCache();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_IsValidWord_1(TessBaseAPI* self, const char* arg0) {
  return self->IsValidWord(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_IsValidCharacter_1(TessBaseAPI* self, const char* arg0) {
  return self->IsValidCharacter(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_DetectOS_1(TessBaseAPI* self, OSResults* arg0) {
  return self->DetectOS(arg0);
}

const char* EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_GetUnichar_1(TessBaseAPI* self, int arg0) {
  return self->GetUnichar(arg0);
}

const Dawg* EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_GetDawg_1(TessBaseAPI* self, int arg0) {
  return self->GetDawg(arg0);
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_NumDawgs_0(TessBaseAPI* self) {
  return self->NumDawgs();
}

const OcrEngineMode EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI_oem_0(TessBaseAPI* self) {
  return self->oem();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_TessBaseAPI___destroy___0(TessBaseAPI* self) {
  delete self;
}

// OSResults

OSResults* EMSCRIPTEN_KEEPALIVE emscripten_bind_OSResults_OSResults_0() {
  return new OSResults();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_OSResults_print_scores_0(OSResults* self) {
  self->print_scores();
}

OSBestResult* EMSCRIPTEN_KEEPALIVE emscripten_bind_OSResults_get_best_result_0(OSResults* self) {
  return &self->best_result;
}

UNICHARSET* EMSCRIPTEN_KEEPALIVE emscripten_bind_OSResults_get_unicharset_0(OSResults* self) {
  return self->unicharset;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_OSResults___destroy___0(OSResults* self) {
  delete self;
}

// Pixa

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Pixa_get_n_0(Pixa* self) {
  return self->n;
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Pixa_get_nalloc_0(Pixa* self) {
  return self->nalloc;
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Pixa_get_refcount_0(Pixa* self) {
  return self->refcount;
}

PixPtr* EMSCRIPTEN_KEEPALIVE emscripten_bind_Pixa_get_pix_0(Pixa* self) {
  return self->pix;
}

Boxa* EMSCRIPTEN_KEEPALIVE emscripten_bind_Pixa_get_boxa_0(Pixa* self) {
  return self->boxa;
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Pixa___destroy___0(Pixa* self) {
  delete self;
}

// PageIteratorLevel
PageIteratorLevel EMSCRIPTEN_KEEPALIVE emscripten_enum_PageIteratorLevel_RIL_BLOCK() {
  return RIL_BLOCK;
}
PageIteratorLevel EMSCRIPTEN_KEEPALIVE emscripten_enum_PageIteratorLevel_RIL_PARA() {
  return RIL_PARA;
}
PageIteratorLevel EMSCRIPTEN_KEEPALIVE emscripten_enum_PageIteratorLevel_RIL_TEXTLINE() {
  return RIL_TEXTLINE;
}
PageIteratorLevel EMSCRIPTEN_KEEPALIVE emscripten_enum_PageIteratorLevel_RIL_WORD() {
  return RIL_WORD;
}
PageIteratorLevel EMSCRIPTEN_KEEPALIVE emscripten_enum_PageIteratorLevel_RIL_SYMBOL() {
  return RIL_SYMBOL;
}

// OcrEngineMode
OcrEngineMode EMSCRIPTEN_KEEPALIVE emscripten_enum_OcrEngineMode_OEM_TESSERACT_ONLY() {
  return OEM_TESSERACT_ONLY;
}
OcrEngineMode EMSCRIPTEN_KEEPALIVE emscripten_enum_OcrEngineMode_OEM_LSTM_ONLY() {
  return OEM_LSTM_ONLY;
}
OcrEngineMode EMSCRIPTEN_KEEPALIVE emscripten_enum_OcrEngineMode_OEM_TESSERACT_LSTM_COMBINED() {
  return OEM_TESSERACT_LSTM_COMBINED;
}
OcrEngineMode EMSCRIPTEN_KEEPALIVE emscripten_enum_OcrEngineMode_OEM_DEFAULT() {
  return OEM_DEFAULT;
}
OcrEngineMode EMSCRIPTEN_KEEPALIVE emscripten_enum_OcrEngineMode_OEM_COUNT() {
  return OEM_COUNT;
}

// WritingDirection_
WritingDirection_ EMSCRIPTEN_KEEPALIVE emscripten_enum_WritingDirection__WRITING_DIRECTION_LEFT_TO_RIGHT() {
  return WRITING_DIRECTION_LEFT_TO_RIGHT;
}
WritingDirection_ EMSCRIPTEN_KEEPALIVE emscripten_enum_WritingDirection__WRITING_DIRECTION_RIGHT_TO_LEFT() {
  return WRITING_DIRECTION_RIGHT_TO_LEFT;
}
WritingDirection_ EMSCRIPTEN_KEEPALIVE emscripten_enum_WritingDirection__WRITING_DIRECTION_TOP_TO_BOTTOM() {
  return WRITING_DIRECTION_TOP_TO_BOTTOM;
}

// PolyBlockType
PolyBlockType EMSCRIPTEN_KEEPALIVE emscripten_enum_PolyBlockType_PT_UNKNOWN() {
  return PT_UNKNOWN;
}
PolyBlockType EMSCRIPTEN_KEEPALIVE emscripten_enum_PolyBlockType_PT_FLOWING_TEXT() {
  return PT_FLOWING_TEXT;
}
PolyBlockType EMSCRIPTEN_KEEPALIVE emscripten_enum_PolyBlockType_PT_HEADING_TEXT() {
  return PT_HEADING_TEXT;
}
PolyBlockType EMSCRIPTEN_KEEPALIVE emscripten_enum_PolyBlockType_PT_PULLOUT_TEXT() {
  return PT_PULLOUT_TEXT;
}
PolyBlockType EMSCRIPTEN_KEEPALIVE emscripten_enum_PolyBlockType_PT_EQUATION() {
  return PT_EQUATION;
}
PolyBlockType EMSCRIPTEN_KEEPALIVE emscripten_enum_PolyBlockType_PT_INLINE_EQUATION() {
  return PT_INLINE_EQUATION;
}
PolyBlockType EMSCRIPTEN_KEEPALIVE emscripten_enum_PolyBlockType_PT_TABLE() {
  return PT_TABLE;
}
PolyBlockType EMSCRIPTEN_KEEPALIVE emscripten_enum_PolyBlockType_PT_VERTICAL_TEXT() {
  return PT_VERTICAL_TEXT;
}
PolyBlockType EMSCRIPTEN_KEEPALIVE emscripten_enum_PolyBlockType_PT_CAPTION_TEXT() {
  return PT_CAPTION_TEXT;
}
PolyBlockType EMSCRIPTEN_KEEPALIVE emscripten_enum_PolyBlockType_PT_FLOWING_IMAGE() {
  return PT_FLOWING_IMAGE;
}
PolyBlockType EMSCRIPTEN_KEEPALIVE emscripten_enum_PolyBlockType_PT_HEADING_IMAGE() {
  return PT_HEADING_IMAGE;
}
PolyBlockType EMSCRIPTEN_KEEPALIVE emscripten_enum_PolyBlockType_PT_PULLOUT_IMAGE() {
  return PT_PULLOUT_IMAGE;
}
PolyBlockType EMSCRIPTEN_KEEPALIVE emscripten_enum_PolyBlockType_PT_HORZ_LINE() {
  return PT_HORZ_LINE;
}
PolyBlockType EMSCRIPTEN_KEEPALIVE emscripten_enum_PolyBlockType_PT_VERT_LINE() {
  return PT_VERT_LINE;
}
PolyBlockType EMSCRIPTEN_KEEPALIVE emscripten_enum_PolyBlockType_PT_NOISE() {
  return PT_NOISE;
}
PolyBlockType EMSCRIPTEN_KEEPALIVE emscripten_enum_PolyBlockType_PT_COUNT() {
  return PT_COUNT;
}

// StrongScriptDirection
StrongScriptDirection EMSCRIPTEN_KEEPALIVE emscripten_enum_StrongScriptDirection_DIR_NEUTRAL() {
  return DIR_NEUTRAL;
}
StrongScriptDirection EMSCRIPTEN_KEEPALIVE emscripten_enum_StrongScriptDirection_DIR_LEFT_TO_RIGHT() {
  return DIR_LEFT_TO_RIGHT;
}
StrongScriptDirection EMSCRIPTEN_KEEPALIVE emscripten_enum_StrongScriptDirection_DIR_RIGHT_TO_LEFT() {
  return DIR_RIGHT_TO_LEFT;
}
StrongScriptDirection EMSCRIPTEN_KEEPALIVE emscripten_enum_StrongScriptDirection_DIR_MIX() {
  return DIR_MIX;
}

// ParagraphJustification_
ParagraphJustification_ EMSCRIPTEN_KEEPALIVE emscripten_enum_ParagraphJustification__JUSTIFICATION_UNKNOWN() {
  return JUSTIFICATION_UNKNOWN;
}
ParagraphJustification_ EMSCRIPTEN_KEEPALIVE emscripten_enum_ParagraphJustification__JUSTIFICATION_LEFT() {
  return JUSTIFICATION_LEFT;
}
ParagraphJustification_ EMSCRIPTEN_KEEPALIVE emscripten_enum_ParagraphJustification__JUSTIFICATION_CENTER() {
  return JUSTIFICATION_CENTER;
}
ParagraphJustification_ EMSCRIPTEN_KEEPALIVE emscripten_enum_ParagraphJustification__JUSTIFICATION_RIGHT() {
  return JUSTIFICATION_RIGHT;
}

// TextlineOrder_
TextlineOrder_ EMSCRIPTEN_KEEPALIVE emscripten_enum_TextlineOrder__TEXTLINE_ORDER_LEFT_TO_RIGHT() {
  return TEXTLINE_ORDER_LEFT_TO_RIGHT;
}
TextlineOrder_ EMSCRIPTEN_KEEPALIVE emscripten_enum_TextlineOrder__TEXTLINE_ORDER_RIGHT_TO_LEFT() {
  return TEXTLINE_ORDER_RIGHT_TO_LEFT;
}
TextlineOrder_ EMSCRIPTEN_KEEPALIVE emscripten_enum_TextlineOrder__TEXTLINE_ORDER_TOP_TO_BOTTOM() {
  return TEXTLINE_ORDER_TOP_TO_BOTTOM;
}

// Orientation_
Orientation_ EMSCRIPTEN_KEEPALIVE emscripten_enum_Orientation__ORIENTATION_PAGE_UP() {
  return ORIENTATION_PAGE_UP;
}
Orientation_ EMSCRIPTEN_KEEPALIVE emscripten_enum_Orientation__ORIENTATION_PAGE_RIGHT() {
  return ORIENTATION_PAGE_RIGHT;
}
Orientation_ EMSCRIPTEN_KEEPALIVE emscripten_enum_Orientation__ORIENTATION_PAGE_DOWN() {
  return ORIENTATION_PAGE_DOWN;
}
Orientation_ EMSCRIPTEN_KEEPALIVE emscripten_enum_Orientation__ORIENTATION_PAGE_LEFT() {
  return ORIENTATION_PAGE_LEFT;
}

// PageSegMode
PageSegMode EMSCRIPTEN_KEEPALIVE emscripten_enum_PageSegMode_PSM_OSD_ONLY() {
  return PSM_OSD_ONLY;
}
PageSegMode EMSCRIPTEN_KEEPALIVE emscripten_enum_PageSegMode_PSM_AUTO_OSD() {
  return PSM_AUTO_OSD;
}
PageSegMode EMSCRIPTEN_KEEPALIVE emscripten_enum_PageSegMode_PSM_AUTO_ONLY() {
  return PSM_AUTO_ONLY;
}
PageSegMode EMSCRIPTEN_KEEPALIVE emscripten_enum_PageSegMode_PSM_AUTO() {
  return PSM_AUTO;
}
PageSegMode EMSCRIPTEN_KEEPALIVE emscripten_enum_PageSegMode_PSM_SINGLE_COLUMN() {
  return PSM_SINGLE_COLUMN;
}
PageSegMode EMSCRIPTEN_KEEPALIVE emscripten_enum_PageSegMode_PSM_SINGLE_BLOCK_VERT_TEXT() {
  return PSM_SINGLE_BLOCK_VERT_TEXT;
}
PageSegMode EMSCRIPTEN_KEEPALIVE emscripten_enum_PageSegMode_PSM_SINGLE_BLOCK() {
  return PSM_SINGLE_BLOCK;
}
PageSegMode EMSCRIPTEN_KEEPALIVE emscripten_enum_PageSegMode_PSM_SINGLE_LINE() {
  return PSM_SINGLE_LINE;
}
PageSegMode EMSCRIPTEN_KEEPALIVE emscripten_enum_PageSegMode_PSM_SINGLE_WORD() {
  return PSM_SINGLE_WORD;
}
PageSegMode EMSCRIPTEN_KEEPALIVE emscripten_enum_PageSegMode_PSM_CIRCLE_WORD() {
  return PSM_CIRCLE_WORD;
}
PageSegMode EMSCRIPTEN_KEEPALIVE emscripten_enum_PageSegMode_PSM_SINGLE_CHAR() {
  return PSM_SINGLE_CHAR;
}
PageSegMode EMSCRIPTEN_KEEPALIVE emscripten_enum_PageSegMode_PSM_SPARSE_TEXT() {
  return PSM_SPARSE_TEXT;
}
PageSegMode EMSCRIPTEN_KEEPALIVE emscripten_enum_PageSegMode_PSM_SPARSE_TEXT_OSD() {
  return PSM_SPARSE_TEXT_OSD;
}
PageSegMode EMSCRIPTEN_KEEPALIVE emscripten_enum_PageSegMode_PSM_RAW_LINE() {
  return PSM_RAW_LINE;
}
PageSegMode EMSCRIPTEN_KEEPALIVE emscripten_enum_PageSegMode_PSM_COUNT() {
  return PSM_COUNT;
}

}

