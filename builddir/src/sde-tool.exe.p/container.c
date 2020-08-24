/* container.c generated by valac 0.48.8, the Vala compiler
 * generated from container.vala, do not modify */

#include <gtk/gtk.h>
#include <glib-object.h>
#include <glib.h>
#include <cairo-gobject.h>
#include <string.h>

#define TYPE_MY_CONTAINER (my_container_get_type ())
#define MY_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_MY_CONTAINER, MyContainer))
#define MY_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_MY_CONTAINER, MyContainerClass))
#define IS_MY_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_MY_CONTAINER))
#define IS_MY_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_MY_CONTAINER))
#define MY_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_MY_CONTAINER, MyContainerClass))

typedef struct _MyContainer MyContainer;
typedef struct _MyContainerClass MyContainerClass;
typedef struct _MyContainerPrivate MyContainerPrivate;
enum  {
	MY_CONTAINER_0_PROPERTY,
	MY_CONTAINER_NUM_PROPERTIES
};
static GParamSpec* my_container_properties[MY_CONTAINER_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _MyContainer {
	GtkContainer parent_instance;
	MyContainerPrivate * priv;
};

struct _MyContainerClass {
	GtkContainerClass parent_class;
};

struct _MyContainerPrivate {
	GtkWidget* _title;
	GtkWidget* _child;
};

static gint MyContainer_private_offset;
static gpointer my_container_parent_class = NULL;

GType my_container_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MyContainer, g_object_unref)
MyContainer* my_container_new (void);
MyContainer* my_container_construct (GType object_type);
static void my_container_real_add (GtkContainer* base,
                            GtkWidget* widget);
static void my_container_real_remove (GtkContainer* base,
                               GtkWidget* widget);
static void my_container_real_forall_internal (GtkContainer* base,
                                        gboolean include_internals,
                                        GtkCallback callback,
                                        gpointer callback_target);
static GtkSizeRequestMode my_container_real_get_request_mode (GtkWidget* base);
GtkWidget* my_container_get_child (MyContainer* self);
static void my_container_real_size_allocate (GtkWidget* base,
                                      GtkAllocation* allocation);
void my_container_get_preferred_size (MyContainer* self,
                                      GtkRequisition* minimum_size,
                                      GtkRequisition* natural_size);
static gboolean my_container_real_draw (GtkWidget* base,
                                 cairo_t* cr);
static void my_container_finalize (GObject * obj);
static GType my_container_get_type_once (void);

static inline gpointer
my_container_get_instance_private (MyContainer* self)
{
	return G_STRUCT_MEMBER_P (self, MyContainer_private_offset);
}

MyContainer*
my_container_construct (GType object_type)
{
	MyContainer * self = NULL;
	GtkLabel* _tmp0_;
	GtkWidget* _tmp1_;
#line 7 "../src/container.vala"
	self = (MyContainer*) g_object_new (object_type, NULL);
#line 8 "../src/container.vala"
	gtk_widget_set_has_window ((GtkWidget*) G_TYPE_CHECK_INSTANCE_CAST (self, gtk_container_get_type (), GtkContainer), FALSE);
#line 9 "../src/container.vala"
	gtk_widget_set_can_focus ((GtkWidget*) G_TYPE_CHECK_INSTANCE_CAST (self, gtk_container_get_type (), GtkContainer), TRUE);
#line 10 "../src/container.vala"
	gtk_widget_set_redraw_on_allocate ((GtkWidget*) G_TYPE_CHECK_INSTANCE_CAST (self, gtk_container_get_type (), GtkContainer), FALSE);
#line 12 "../src/container.vala"
	_tmp0_ = (GtkLabel*) gtk_label_new_with_mnemonic ("Title");
#line 12 "../src/container.vala"
	g_object_ref_sink (_tmp0_);
#line 12 "../src/container.vala"
	_g_object_unref0 (self->priv->_title);
#line 12 "../src/container.vala"
	self->priv->_title = (GtkWidget*) _tmp0_;
#line 13 "../src/container.vala"
	_tmp1_ = self->priv->_title;
#line 13 "../src/container.vala"
	gtk_widget_set_parent (_tmp1_, (GtkWidget*) ((GtkContainer*) self));
#line 15 "../src/container.vala"
	_g_object_unref0 (self->priv->_child);
#line 15 "../src/container.vala"
	self->priv->_child = NULL;
#line 7 "../src/container.vala"
	return self;
#line 107 "container.c"
}

MyContainer*
my_container_new (void)
{
#line 7 "../src/container.vala"
	return my_container_construct (TYPE_MY_CONTAINER);
#line 115 "container.c"
}

static gpointer
_g_object_ref0 (gpointer self)
{
#line 21 "../src/container.vala"
	return self ? g_object_ref (self) : NULL;
#line 123 "container.c"
}

static void
my_container_real_add (GtkContainer* base,
                       GtkWidget* widget)
{
	MyContainer * self;
	GtkWidget* _tmp0_;
#line 18 "../src/container.vala"
	self = (MyContainer*) base;
#line 18 "../src/container.vala"
	g_return_if_fail (widget != NULL);
#line 19 "../src/container.vala"
	_tmp0_ = self->priv->_child;
#line 19 "../src/container.vala"
	if (_tmp0_ == NULL) {
#line 140 "container.c"
		GtkWidget* _tmp1_;
#line 20 "../src/container.vala"
		gtk_widget_set_parent (widget, (GtkWidget*) ((GtkContainer*) self));
#line 21 "../src/container.vala"
		_tmp1_ = _g_object_ref0 (widget);
#line 21 "../src/container.vala"
		_g_object_unref0 (self->priv->_child);
#line 21 "../src/container.vala"
		self->priv->_child = _tmp1_;
#line 150 "container.c"
	}
}

static void
my_container_real_remove (GtkContainer* base,
                          GtkWidget* widget)
{
	MyContainer * self;
	GtkWidget* _tmp0_;
#line 25 "../src/container.vala"
	self = (MyContainer*) base;
#line 25 "../src/container.vala"
	g_return_if_fail (widget != NULL);
#line 26 "../src/container.vala"
	_tmp0_ = self->priv->_child;
#line 26 "../src/container.vala"
	if (_tmp0_ == widget) {
#line 168 "container.c"
		gboolean _tmp1_ = FALSE;
#line 27 "../src/container.vala"
		gtk_widget_unparent (widget);
#line 28 "../src/container.vala"
		_g_object_unref0 (self->priv->_child);
#line 28 "../src/container.vala"
		self->priv->_child = NULL;
#line 29 "../src/container.vala"
		if (gtk_widget_get_visible ((GtkWidget*) self)) {
#line 29 "../src/container.vala"
			_tmp1_ = gtk_widget_get_visible (widget);
#line 180 "container.c"
		} else {
#line 29 "../src/container.vala"
			_tmp1_ = FALSE;
#line 184 "container.c"
		}
#line 29 "../src/container.vala"
		if (_tmp1_) {
#line 30 "../src/container.vala"
			gtk_widget_queue_resize_no_redraw ((GtkWidget*) self);
#line 190 "container.c"
		}
	}
}

static void
my_container_real_forall_internal (GtkContainer* base,
                                   gboolean include_internals,
                                   GtkCallback callback,
                                   gpointer callback_target)
{
	MyContainer * self;
	GtkWidget* _tmp0_;
	GtkWidget* _tmp2_;
#line 35 "../src/container.vala"
	self = (MyContainer*) base;
#line 36 "../src/container.vala"
	_tmp0_ = self->priv->_title;
#line 36 "../src/container.vala"
	if (_tmp0_ != NULL) {
#line 210 "container.c"
		GtkWidget* _tmp1_;
#line 37 "../src/container.vala"
		_tmp1_ = self->priv->_title;
#line 37 "../src/container.vala"
		callback (_tmp1_, callback_target);
#line 216 "container.c"
	}
#line 39 "../src/container.vala"
	_tmp2_ = self->priv->_child;
#line 39 "../src/container.vala"
	if (_tmp2_ != NULL) {
#line 222 "container.c"
		GtkWidget* _tmp3_;
#line 40 "../src/container.vala"
		_tmp3_ = self->priv->_child;
#line 40 "../src/container.vala"
		callback (_tmp3_, callback_target);
#line 228 "container.c"
	}
}

static GtkSizeRequestMode
my_container_real_get_request_mode (GtkWidget* base)
{
	MyContainer * self;
	GtkWidget* _tmp0_;
	GtkSizeRequestMode result = 0;
#line 44 "../src/container.vala"
	self = (MyContainer*) base;
#line 45 "../src/container.vala"
	_tmp0_ = self->priv->_child;
#line 45 "../src/container.vala"
	if (_tmp0_ != NULL) {
#line 244 "container.c"
		GtkWidget* _tmp1_;
#line 46 "../src/container.vala"
		_tmp1_ = self->priv->_child;
#line 46 "../src/container.vala"
		result = gtk_widget_get_request_mode (_tmp1_);
#line 46 "../src/container.vala"
		return result;
#line 252 "container.c"
	} else {
#line 48 "../src/container.vala"
		result = GTK_SIZE_REQUEST_HEIGHT_FOR_WIDTH;
#line 48 "../src/container.vala"
		return result;
#line 258 "container.c"
	}
}

GtkWidget*
my_container_get_child (MyContainer* self)
{
	GtkWidget* _tmp0_;
	GtkWidget* _tmp1_;
	GtkWidget* result = NULL;
#line 52 "../src/container.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 53 "../src/container.vala"
	_tmp0_ = self->priv->_child;
#line 53 "../src/container.vala"
	_tmp1_ = _g_object_ref0 (_tmp0_);
#line 53 "../src/container.vala"
	result = _tmp1_;
#line 53 "../src/container.vala"
	return result;
#line 278 "container.c"
}

static void
my_container_real_size_allocate (GtkWidget* base,
                                 GtkAllocation* allocation)
{
	MyContainer * self;
	GtkAllocation title_allocation = {0};
	GtkAllocation child_allocation = {0};
	guint border_width = 0U;
	gboolean _tmp0_ = FALSE;
	GtkWidget* _tmp1_;
	gboolean _tmp9_ = FALSE;
	GtkWidget* _tmp10_;
	GtkAllocation _tmp23_;
#line 56 "../src/container.vala"
	self = (MyContainer*) base;
#line 56 "../src/container.vala"
	g_return_if_fail (allocation != NULL);
#line 57 "../src/container.vala"
	memset (&title_allocation, 0, sizeof (GtkAllocation));
#line 58 "../src/container.vala"
	memset (&child_allocation, 0, sizeof (GtkAllocation));
#line 59 "../src/container.vala"
	border_width = gtk_container_get_border_width ((GtkContainer*) self);
#line 60 "../src/container.vala"
	_tmp1_ = self->priv->_title;
#line 60 "../src/container.vala"
	if (_tmp1_ != NULL) {
#line 308 "container.c"
		GtkWidget* _tmp2_;
#line 60 "../src/container.vala"
		_tmp2_ = self->priv->_title;
#line 60 "../src/container.vala"
		_tmp0_ = gtk_widget_get_visible (_tmp2_);
#line 314 "container.c"
	} else {
#line 60 "../src/container.vala"
		_tmp0_ = FALSE;
#line 318 "container.c"
	}
#line 60 "../src/container.vala"
	if (_tmp0_) {
#line 322 "container.c"
		GtkAllocation _tmp3_;
		GtkAllocation _tmp4_;
		GtkAllocation _tmp5_;
		GtkWidget* _tmp6_;
		GtkAllocation _tmp7_;
#line 61 "../src/container.vala"
		_tmp3_ = *allocation;
#line 61 "../src/container.vala"
		title_allocation.x = _tmp3_.x + ((gint) border_width);
#line 62 "../src/container.vala"
		_tmp4_ = *allocation;
#line 62 "../src/container.vala"
		title_allocation.y = _tmp4_.y + ((gint) border_width);
#line 63 "../src/container.vala"
		_tmp5_ = *allocation;
#line 63 "../src/container.vala"
		title_allocation.width = _tmp5_.width - (2 * ((gint) border_width));
#line 64 "../src/container.vala"
		title_allocation.height = 24;
#line 65 "../src/container.vala"
		_tmp6_ = self->priv->_title;
#line 65 "../src/container.vala"
		_tmp7_ = title_allocation;
#line 65 "../src/container.vala"
		gtk_widget_size_allocate (_tmp6_, &_tmp7_);
#line 66 "../src/container.vala"
		if (gtk_widget_get_realized ((GtkWidget*) self)) {
#line 350 "container.c"
			GtkWidget* _tmp8_;
#line 67 "../src/container.vala"
			_tmp8_ = self->priv->_title;
#line 67 "../src/container.vala"
			gtk_widget_show (_tmp8_);
#line 356 "container.c"
		}
	}
#line 70 "../src/container.vala"
	_tmp10_ = self->priv->_child;
#line 70 "../src/container.vala"
	if (_tmp10_ != NULL) {
#line 363 "container.c"
		GtkWidget* _tmp11_;
#line 70 "../src/container.vala"
		_tmp11_ = self->priv->_child;
#line 70 "../src/container.vala"
		_tmp9_ = gtk_widget_get_visible (_tmp11_);
#line 369 "container.c"
	} else {
#line 70 "../src/container.vala"
		_tmp9_ = FALSE;
#line 373 "container.c"
	}
#line 70 "../src/container.vala"
	if (_tmp9_) {
#line 377 "container.c"
		GtkAllocation _tmp12_;
		GtkAllocation _tmp13_;
		GtkAllocation _tmp14_;
		GtkAllocation _tmp15_;
		GtkWidget* _tmp16_;
		GtkAllocation _tmp17_;
#line 71 "../src/container.vala"
		_tmp12_ = *allocation;
#line 71 "../src/container.vala"
		child_allocation.x = _tmp12_.x + ((gint) border_width);
#line 72 "../src/container.vala"
		_tmp13_ = *allocation;
#line 72 "../src/container.vala"
		child_allocation.y = (_tmp13_.y + 24) + ((gint) border_width);
#line 73 "../src/container.vala"
		_tmp14_ = *allocation;
#line 73 "../src/container.vala"
		child_allocation.width = _tmp14_.width - (2 * ((gint) border_width));
#line 74 "../src/container.vala"
		_tmp15_ = *allocation;
#line 74 "../src/container.vala"
		child_allocation.height = (_tmp15_.height - 24) - (2 * ((gint) border_width));
#line 75 "../src/container.vala"
		_tmp16_ = self->priv->_child;
#line 75 "../src/container.vala"
		_tmp17_ = child_allocation;
#line 75 "../src/container.vala"
		gtk_widget_size_allocate (_tmp16_, &_tmp17_);
#line 76 "../src/container.vala"
		if (gtk_widget_get_realized ((GtkWidget*) self)) {
#line 408 "container.c"
			GtkWidget* _tmp18_;
#line 77 "../src/container.vala"
			_tmp18_ = self->priv->_child;
#line 77 "../src/container.vala"
			gtk_widget_show (_tmp18_);
#line 414 "container.c"
		}
	}
#line 80 "../src/container.vala"
	if (gtk_widget_get_realized ((GtkWidget*) self)) {
#line 419 "container.c"
		GtkWidget* _tmp19_;
		GtkWidget* _tmp21_;
#line 81 "../src/container.vala"
		_tmp19_ = self->priv->_title;
#line 81 "../src/container.vala"
		if (_tmp19_ != NULL) {
#line 426 "container.c"
			GtkWidget* _tmp20_;
#line 82 "../src/container.vala"
			_tmp20_ = self->priv->_title;
#line 82 "../src/container.vala"
			gtk_widget_set_child_visible (_tmp20_, TRUE);
#line 432 "container.c"
		}
#line 84 "../src/container.vala"
		_tmp21_ = self->priv->_child;
#line 84 "../src/container.vala"
		if (_tmp21_ != NULL) {
#line 438 "container.c"
			GtkWidget* _tmp22_;
#line 85 "../src/container.vala"
			_tmp22_ = self->priv->_child;
#line 85 "../src/container.vala"
			gtk_widget_set_child_visible (_tmp22_, TRUE);
#line 444 "container.c"
		}
	}
#line 88 "../src/container.vala"
	_tmp23_ = *allocation;
#line 88 "../src/container.vala"
	GTK_WIDGET_CLASS (my_container_parent_class)->size_allocate ((GtkWidget*) G_TYPE_CHECK_INSTANCE_CAST (self, gtk_container_get_type (), GtkContainer), &_tmp23_);
#line 451 "container.c"
}

void
my_container_get_preferred_size (MyContainer* self,
                                 GtkRequisition* minimum_size,
                                 GtkRequisition* natural_size)
{
	GtkRequisition _vala_minimum_size = {0};
	GtkRequisition _vala_natural_size = {0};
	GtkRequisition title_minimum_size = {0};
	GtkRequisition _tmp0_ = {0};
	GtkRequisition title_natural_size = {0};
	GtkRequisition _tmp1_ = {0};
	GtkRequisition child_minimum_size = {0};
	GtkRequisition _tmp2_ = {0};
	GtkRequisition child_natural_size = {0};
	GtkRequisition _tmp3_ = {0};
	gboolean _tmp4_ = FALSE;
	GtkWidget* _tmp5_;
	gboolean _tmp10_ = FALSE;
	GtkWidget* _tmp11_;
	GtkRequisition _tmp16_ = {0};
	GtkRequisition _tmp17_ = {0};
	GtkRequisition _tmp18_;
	GtkRequisition _tmp19_;
	GtkRequisition _tmp20_;
	GtkRequisition _tmp21_;
	GtkRequisition _tmp22_;
	GtkRequisition _tmp23_;
	GtkRequisition _tmp24_;
	GtkRequisition _tmp25_;
#line 91 "../src/container.vala"
	g_return_if_fail (self != NULL);
#line 94 "../src/container.vala"
	_tmp0_.width = 0;
#line 94 "../src/container.vala"
	_tmp0_.height = 0;
#line 94 "../src/container.vala"
	title_minimum_size = _tmp0_;
#line 95 "../src/container.vala"
	_tmp1_.width = 0;
#line 95 "../src/container.vala"
	_tmp1_.height = 0;
#line 95 "../src/container.vala"
	title_natural_size = _tmp1_;
#line 96 "../src/container.vala"
	_tmp2_.width = 0;
#line 96 "../src/container.vala"
	_tmp2_.height = 0;
#line 96 "../src/container.vala"
	child_minimum_size = _tmp2_;
#line 97 "../src/container.vala"
	_tmp3_.width = 0;
#line 97 "../src/container.vala"
	_tmp3_.height = 0;
#line 97 "../src/container.vala"
	child_natural_size = _tmp3_;
#line 99 "../src/container.vala"
	_tmp5_ = self->priv->_title;
#line 99 "../src/container.vala"
	if (_tmp5_ != NULL) {
#line 513 "container.c"
		GtkWidget* _tmp6_;
#line 99 "../src/container.vala"
		_tmp6_ = self->priv->_title;
#line 99 "../src/container.vala"
		_tmp4_ = gtk_widget_get_visible (_tmp6_);
#line 519 "container.c"
	} else {
#line 99 "../src/container.vala"
		_tmp4_ = FALSE;
#line 523 "container.c"
	}
#line 99 "../src/container.vala"
	if (_tmp4_) {
#line 527 "container.c"
		GtkWidget* _tmp7_;
		GtkRequisition _tmp8_ = {0};
		GtkRequisition _tmp9_ = {0};
#line 100 "../src/container.vala"
		_tmp7_ = self->priv->_title;
#line 100 "../src/container.vala"
		gtk_widget_get_preferred_size (_tmp7_, &_tmp8_, &_tmp9_);
#line 100 "../src/container.vala"
		title_minimum_size = _tmp8_;
#line 100 "../src/container.vala"
		title_natural_size = _tmp9_;
#line 539 "container.c"
	}
#line 102 "../src/container.vala"
	_tmp11_ = self->priv->_child;
#line 102 "../src/container.vala"
	if (_tmp11_ != NULL) {
#line 545 "container.c"
		GtkWidget* _tmp12_;
#line 102 "../src/container.vala"
		_tmp12_ = self->priv->_child;
#line 102 "../src/container.vala"
		_tmp10_ = gtk_widget_get_visible (_tmp12_);
#line 551 "container.c"
	} else {
#line 102 "../src/container.vala"
		_tmp10_ = FALSE;
#line 555 "container.c"
	}
#line 102 "../src/container.vala"
	if (_tmp10_) {
#line 559 "container.c"
		GtkWidget* _tmp13_;
		GtkRequisition _tmp14_ = {0};
		GtkRequisition _tmp15_ = {0};
#line 103 "../src/container.vala"
		_tmp13_ = self->priv->_child;
#line 103 "../src/container.vala"
		gtk_widget_get_preferred_size (_tmp13_, &_tmp14_, &_tmp15_);
#line 103 "../src/container.vala"
		child_minimum_size = _tmp14_;
#line 103 "../src/container.vala"
		child_natural_size = _tmp15_;
#line 571 "container.c"
	}
#line 106 "../src/container.vala"
	_tmp16_.width = 0;
#line 106 "../src/container.vala"
	_tmp16_.height = 0;
#line 106 "../src/container.vala"
	_vala_minimum_size = _tmp16_;
#line 107 "../src/container.vala"
	_tmp17_.width = 0;
#line 107 "../src/container.vala"
	_tmp17_.height = 0;
#line 107 "../src/container.vala"
	_vala_natural_size = _tmp17_;
#line 109 "../src/container.vala"
	_tmp18_ = title_minimum_size;
#line 109 "../src/container.vala"
	_tmp19_ = child_minimum_size;
#line 109 "../src/container.vala"
	_vala_minimum_size.width = MAX (_tmp18_.width, _tmp19_.width);
#line 110 "../src/container.vala"
	_tmp20_ = title_minimum_size;
#line 110 "../src/container.vala"
	_tmp21_ = child_minimum_size;
#line 110 "../src/container.vala"
	_vala_minimum_size.height = _tmp20_.height + _tmp21_.height;
#line 111 "../src/container.vala"
	_tmp22_ = title_natural_size;
#line 111 "../src/container.vala"
	_tmp23_ = child_natural_size;
#line 111 "../src/container.vala"
	_vala_natural_size.width = MAX (_tmp22_.width, _tmp23_.width);
#line 112 "../src/container.vala"
	_tmp24_ = title_natural_size;
#line 112 "../src/container.vala"
	_tmp25_ = child_natural_size;
#line 112 "../src/container.vala"
	_vala_natural_size.height = _tmp24_.height + _tmp25_.height;
#line 91 "../src/container.vala"
	if (minimum_size) {
#line 91 "../src/container.vala"
		*minimum_size = _vala_minimum_size;
#line 613 "container.c"
	}
#line 91 "../src/container.vala"
	if (natural_size) {
#line 91 "../src/container.vala"
		*natural_size = _vala_natural_size;
#line 619 "container.c"
	}
}

static gboolean
my_container_real_draw (GtkWidget* base,
                        cairo_t* cr)
{
	MyContainer * self;
	gboolean result = FALSE;
#line 115 "../src/container.vala"
	self = (MyContainer*) base;
#line 115 "../src/container.vala"
	g_return_val_if_fail (cr != NULL, FALSE);
#line 116 "../src/container.vala"
	GTK_WIDGET_CLASS (my_container_parent_class)->draw ((GtkWidget*) G_TYPE_CHECK_INSTANCE_CAST (self, gtk_container_get_type (), GtkContainer), cr);
#line 117 "../src/container.vala"
	result = FALSE;
#line 117 "../src/container.vala"
	return result;
#line 639 "container.c"
}

static void
my_container_class_init (MyContainerClass * klass,
                         gpointer klass_data)
{
#line 3 "../src/container.vala"
	my_container_parent_class = g_type_class_peek_parent (klass);
#line 3 "../src/container.vala"
	g_type_class_adjust_private_offset (klass, &MyContainer_private_offset);
#line 3 "../src/container.vala"
	((GtkContainerClass *) klass)->add = (void (*) (GtkContainer*, GtkWidget*)) my_container_real_add;
#line 3 "../src/container.vala"
	((GtkContainerClass *) klass)->remove = (void (*) (GtkContainer*, GtkWidget*)) my_container_real_remove;
#line 3 "../src/container.vala"
	((GtkContainerClass *) klass)->forall = (void (*) (GtkContainer*, gboolean, GtkCallback, gpointer)) my_container_real_forall_internal;
#line 3 "../src/container.vala"
	((GtkWidgetClass *) klass)->get_request_mode = (GtkSizeRequestMode (*) (GtkWidget*)) my_container_real_get_request_mode;
#line 3 "../src/container.vala"
	((GtkWidgetClass *) klass)->size_allocate = (void (*) (GtkWidget*, GtkAllocation*)) my_container_real_size_allocate;
#line 3 "../src/container.vala"
	((GtkWidgetClass *) klass)->draw = (gboolean (*) (GtkWidget*, cairo_t*)) my_container_real_draw;
#line 3 "../src/container.vala"
	G_OBJECT_CLASS (klass)->finalize = my_container_finalize;
#line 664 "container.c"
}

static void
my_container_instance_init (MyContainer * self,
                            gpointer klass)
{
#line 3 "../src/container.vala"
	self->priv = my_container_get_instance_private (self);
#line 673 "container.c"
}

static void
my_container_finalize (GObject * obj)
{
	MyContainer * self;
#line 3 "../src/container.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_MY_CONTAINER, MyContainer);
#line 4 "../src/container.vala"
	_g_object_unref0 (self->priv->_title);
#line 5 "../src/container.vala"
	_g_object_unref0 (self->priv->_child);
#line 3 "../src/container.vala"
	G_OBJECT_CLASS (my_container_parent_class)->finalize (obj);
#line 688 "container.c"
}

static GType
my_container_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (MyContainerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) my_container_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (MyContainer), 0, (GInstanceInitFunc) my_container_instance_init, NULL };
	GType my_container_type_id;
	my_container_type_id = g_type_register_static (gtk_container_get_type (), "MyContainer", &g_define_type_info, 0);
	MyContainer_private_offset = g_type_add_instance_private (my_container_type_id, sizeof (MyContainerPrivate));
	return my_container_type_id;
}

GType
my_container_get_type (void)
{
	static volatile gsize my_container_type_id__volatile = 0;
	if (g_once_init_enter (&my_container_type_id__volatile)) {
		GType my_container_type_id;
		my_container_type_id = my_container_get_type_once ();
		g_once_init_leave (&my_container_type_id__volatile, my_container_type_id);
	}
	return my_container_type_id__volatile;
}

